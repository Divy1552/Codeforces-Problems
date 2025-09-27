# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

ll GCD(ll a,ll b) {

    ll result = b == 0 ? a : GCD(b,a % b);

    return result;
}

ll LCM(ll a,ll b) {

    ll result = a / GCD(a,b) * b;

    return result;
}

ll countDivisible(ll l,ll r,ll p) {

    ll result = r/p - (l-1)/p;

    return result;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int T;
    cin >> T;

    vector<int> Primes = {2,3,5,7};

    for (int t = 1;t <= T;t++) {

        ll l,r;
        cin >> l >> r;

        ll total = r-l+1,notGood = 0;

        for (int i = 1;i < (1 << 4);i++) {

            ll currentLCM = 1; int bitCount = 0;

            for (int j = 0;j < 4;j++) {
                if (i & (1 << j)) {
                    currentLCM = LCM(Primes[j],currentLCM);
                    bitCount++;
                }
            }

            ll Count = countDivisible(l,r,currentLCM);

            if (bitCount % 2)
                notGood += Count;
            else
                notGood -= Count;

        }

        cout << total - notGood << endl;

    }

    return 0;
}