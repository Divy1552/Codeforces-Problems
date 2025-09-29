# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

const int M = 998244353;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    
    int T;
    cin >> T;

    for (int t = 1;t <= T;t++) {

        int n; cin >> n;

        vector<int> a(n),b(n);

        for (auto &i : a) cin >> i;

        for (auto &i : b) cin >> i;

        vector<ll> dp1(n),dp2(n);

        dp1[n-1] = 1; dp2[n-1] = 1;

        for (int i = n-2;i >= 0;i--) {

            if (a[i] <= a[i+1] && b[i] <= b[i+1]) {
                dp1[i] = (dp1[i] + dp1[i+1]) % M;
                dp2[i] = (dp2[i] + dp2[i+1]) % M;
            }

            if (a[i] <= b[i+1] && b[i] <= a[i+1]) {
                dp1[i] = (dp1[i] + dp2[i+1]) % M;
                dp2[i] = (dp2[i] + dp1[i+1]) % M;
            }

        }

        cout << (dp1[0] + dp2[0]) % M << endl;

    }

    return 0;
}