# include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
const ll MOD = 676767677;
 
int main() {
 
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    
    int T;
    cin >> T;
 
    while (T--) {
 
        int n;
        cin >> n;
 
        vector<ll> a(n+1);
        for (int i = 1;i <= n;i++) cin >> a[i];
 
        vector<ll> base(n+1),alt(n+1);
 
        for (int i = 1;i <= n;i++) base[i] = a[i] - (ll) (n-i+1);
 
        alt[0] = 0; bool flag = true;
 
        for (int i = 1;i <= n;i++) alt[i] = base[i] - alt[i-1];
 
        for (int i = 1;i <= n;i++) {

            if (i % 2 == 0) {
                if (alt[i] < 0) flag = false;
            } else {
                if (alt[i] > 0) flag = false;
            }

        }
 
        if (!flag) {
            cout << 0 << endl;
            continue;
        }
 
        if (n % 2 == 0) {
 
            ll S = alt[n];

            if (S < 0 || S > n) {
                cout << 0 << endl;
                continue;
            }
 
            vector<ll> x(n+1);

            x[0] = 0; bool valid = true;
 
            for (int i = 1;i <= n;i++) {

                x[i] = alt[i] + ((i % 2 == 1) ? S : 0);

                if (x[i] < 0 || x[i] > S) {valid = false; break;}

                ll d = x[i] - x[i-1];

                if (!(d == 0 || d == 1)) {valid = false; break;}

            }
 
            cout << (valid ? 1 : 0) << endl;

            continue;
        }
 
        if (alt[n] != 0) {
            cout << 0 << endl;
            continue;
        }
 
        ll L = 0,U = n;
 
        for (int i = 1;i <= n;i++) {
 
            if (i % 2 == 1)
                L = max(L,-alt[i]);
            else
                L = max(L,alt[i]);
 
            ll diff = alt[i] - alt[i-1];

            if (i % 2 == 1) {
                L = max(L,-diff);
                U = min(U,1 - diff);
            } else {
                L = max(L,diff - 1);
                U = min(U,diff);
            }

            if (L > U) break;

        }
 
        if (L > U) {
            cout << 0 << endl;
            continue;
        }
 
        ll low = max(L,0LL);

        ll high = min(U,(ll) n);

        if (low > high) {
            cout << 0 << endl;
            continue;
        }

        cout << (high - low + 1) % MOD << endl;

    }
 
    return 0;
}