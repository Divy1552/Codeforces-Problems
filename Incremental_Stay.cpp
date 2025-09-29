# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    
    int T;
    cin >> T;

    for (int t = 1;t <= T;t++) {

        int n; cin >> n;

        vector<ll> a(2*n+1);

        for (int i = 1;i <= 2*n;i++) cin >> a[i];

        vector<ll> dp(n+1);

        for (int i = 2;i <= 2*n;i += 2) dp[1] += a[i] - a[i-1];

        dp[2] = a[2*n] - a[1];

        for (int i = 3;i <= 2*n;i += 2) dp[2] += a[i] - a[i-1];

        for (int k = 3;k <= n;k++) dp[k] = dp[k-2] + 2*(a[2*n-(k-2)]-a[k-1]);

        for (int k = 1;k <= n;k++)
            cout << dp[k] << " ";
        cout << endl;

    }

    return 0;
}