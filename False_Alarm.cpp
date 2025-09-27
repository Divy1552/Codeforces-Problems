# include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {

        int n,x;
        cin >> n >> x;

        vector<int> v(n);

        for (auto &i : v) cin >> i;

        int first_idx = -1;

        for (int i = 0;i < n;i++) {
            if (v[i] == 1) {
                first_idx = i;
                break;
            }
        }

        if (first_idx == -1) {
            cout << "YES" << endl;
            continue;
        }

        if (first_idx + x > n) {
            cout << "YES" << endl;
            continue;
        }

        for (int i = first_idx + x;i <= n;i++) {

            if (i == n) {
                cout << "YES" << endl;
                break;
            }

            if (v[i] == 1) {
                cout << "NO" << endl;
                break;
            }

        }

    }

    return 0;
}