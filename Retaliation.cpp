# include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        vector<int> v(n);

        for (auto &i : v) cin >> i;

        bool flag = true;

        for (int k = 1;k <= (n+1)/2;k++) {
            if ((v[k-1] + v[n-k]) % (n+1) != 0) {
                flag = false;
                break;
            }
        }

        if (!flag) {
            cout << "NO" << endl;
            continue;
        }

        int val = (v[0] + v[n-1]) / (n+1);

        for (int k = 1;k <= (n+1)/2;k++) {
            if ((v[k-1] + v[n-k]) / (n+1) != val) {
                flag = false;
                break;
            }
        }

        if (!flag) {
            cout << "NO" << endl;
            continue;
        }

        for (int k = 1;k <= n/2;k++) {

            int diff = n+1-2*k;
            int lhs1 = v[k-1] - k*val;
            int lhs2 = (n+1-k)*val - v[k-1];

            bool exp1 = lhs1 % diff == 0 && lhs1 / diff >= 0;
            bool exp2 = lhs2 % diff == 0 && lhs2 / diff >= 0;

            if (!(exp1 && exp2)) {
                flag = false;
                break;
            }

        }

        if (!flag) {
            cout << "NO" << endl;
            continue;
        }

        int k1 = (n*val - v[0]) / (n-1);

        int k2 = (v[0] - val) / (n-1);

        for (int k = 1;k <= n;k++) {
            if(v[k-1] != k*k1 + (n+1-k)*k2) {
                flag = false;
                break;
            }
        }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }

    return 0;
}