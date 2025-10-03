# include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int T;
    cin >> T;

    for (int t = 1;t <= T;t++) {

        int n,q;
        cin >> n >> q;

        vector<int> a(n+1);

        for (int i = 1;i <= n;i++) cin >> a[i];

        vector<int> p0(n+1),p1(n+1);

        for (int i = 1;i <= n;i++) {
            p0[i] = p0[i-1] + (a[i] == 0);
            p1[i] = p1[i-1] + (a[i] == 1);
        }

        vector<int> pf(n+1);

        for (int i = 2;i <= n;i++)
            pf[i] = pf[i-1] + (a[i] == a[i-1]);

        for (int i = 1;i <= q;i++) {

            int l,r;
            cin >> l >> r;

            ll Count0 = p0[r] - p0[l-1];

            ll Count1 = p1[r] - p1[l-1];

            if (Count0 % 3 != 0 || Count1 % 3 != 0) {
                cout << -1 << endl;
                continue;
            }

            ll Cost = Count0 / 3 + Count1 / 3;

            bool flag = pf[r] - pf[l] == 0;

            if (flag)
                cout << Cost + 1 << endl;
            else
                cout << Cost << endl;
            
        }
    
    }

    return 0;
}