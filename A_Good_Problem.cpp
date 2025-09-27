# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

int computeMSB(ll n) {
    for (int i = 63;i >= 0;i--)
        if ((n >> i) & 1) return i;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int T;
    cin >> T;

    for (int t = 1;t <= T;t++) {

        ll n,l,r,k;
        cin >> n >> l >> r >> k;

        if (n % 2 == 0) {

            int MSB = computeMSB(l);

            ll x = (1LL << (MSB + 1));

            if (((x < l) || (x > r))) {
                cout << -1 << endl;
                continue;
            }

            if (n > 2) {

                if (k <= n-2)
                    cout << l << endl;
                else
                    cout << x << endl;

            } else cout << -1 << endl;
            
        } else cout << l << endl;

    }

    return 0;
}