# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

int Beauty(ll n) {

    int beauty = 0;

    while (n > 0) {

        beauty += n % 2;

        n /= 2;

    }

    return beauty;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {

        ll n,k;
        cin >> n >> k;

        vector<ll> a(n);

        for (auto &i : a) cin >> i;

        ll maxBeauty = 0;

        for (auto &i : a) maxBeauty += Beauty(i);

        for (int i = 0;i <= 60;i++) {

            ll y = 1LL << i;

            for (int j = 0;j < n;j++) {  

                if (!(a[j] & y) && k >= y) {

                    maxBeauty++;
                    k -= y;
                    
                }

            }

        }

        cout << maxBeauty << endl;

    }

    return 0;
}