# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

const int M = 1e9+7;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    
    int T;
    cin >> T;

    for (int t = 1;t <= T;t++) {

        int n;
        cin >> n;

        vector<int> a(n);
        
        for (int i = 0;i < n;i++) cin >> a[i];

        int Max = a[0];
            
        for (int i = 0;i < n;i++) Max = max(a[i],Max);

        vector<ll> dp1(Max+1,0);

        vector<vector<ll>> dp2(Max+1,vector<ll>(Max+1,0));

        ll result = 1;

        for (int i = 0;i < n;i++) {

            int v = a[i];

            vector<ll> v1(Max+ 1,0);

            vector<vector<ll>> v2(Max+1,vector<ll>(Max+1,0));

            v1[v] = 1; ll add = 1;

            for (int u = 1;u <= Max;u++) {

                if (!dp1[u]) continue;

                if (u <= v) {
                    v1[v] += dp1[u];
                    if (v1[v] >= M) v1[v] -= M;
                    add += dp1[u];
                } else {
                    v2[v][u] += dp1[u];
                    if (v2[v][u] >= M) v2[v][u] -= M;
                    add += dp1[u];
                }
            }

            for (int m = 1;m <= Max;m++) {
                for (int MAX = 1;MAX <= Max;MAX++) {

                    ll c = dp2[m][MAX];

                    if (!c) continue;

                    if (m > v) continue;

                    if (MAX <= v) {
                        v2[m][v] += c;
                        if (v2[m][v] >= M) v2[m][v] -= M;
                        add += c;
                    } else {
                        v2[v][MAX] += c;
                        if (v2[v][MAX] >= M) v2[v][MAX] -= M;
                        add += c;
                    }
                }
            }

            for (int u = 1;u <= Max;u++) {
                dp1[u] += v1[u];
                if (dp1[u] >= M) dp1[u] -= M;
            }

            for (int m = 1;m <= Max;m++) {
                for (int MAX = 1;MAX <= Max;MAX++) {
                    if (v2[m][MAX]) {
                        dp2[m][MAX] += v2[m][MAX];
                        if (dp2[m][MAX] >= M) dp2[m][MAX] -= M;
                    }
                }
            }

            result = (result + (add % M)) % M;

        }

        cout << result % M << endl;

    }

    return 0;
}