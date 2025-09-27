# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int T;
    cin >> T;

    for (int t = 1;t <= T;t++) {

        int n;
        cin >> n;

        vector<int> p(n),s(n);

        for (auto &i : p) cin >> i;
        for (auto &i : s) cin >> i;

        if (p[n-1] != s[0]) {
            cout << "NO" << endl;
            continue;
        }

        bool flag = true;

        for (int i = 0;i < n-1;i++) {

            if (__gcd(p[i],s[i+1]) != s[0]) flag = false;

            if (p[i] % p[i+1] != 0) flag = false;

            if (s[n-1-i] % s[n-2-i] != 0) flag = false;

            if (!flag) break;

        }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }

    return 0;
}