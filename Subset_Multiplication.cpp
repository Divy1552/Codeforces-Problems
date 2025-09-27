# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

ll GCD(ll a,ll b) {

    ll result = __gcd(a,b);

    return result;
}

ll LCM(ll a,ll b) {

    ll result = a / GCD(a,b) * b;

    return result;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int T;
    cin >> T;

    for (int t = 1;t <= T;t++) {

        int n;
        cin >> n;

        vector<int> b(n);

        for (auto &i : b) cin >> i;

        ll result = 1;

        for (int i = n-2;i >= 0;i--) {

            if (b[i+1] % b[i] == 0) continue;

            int x = b[i]/GCD(b[i],b[i+1]);

            b[i] /= x; result = LCM(x,result);

        }

        cout << result << endl;

    }

    return 0;
}