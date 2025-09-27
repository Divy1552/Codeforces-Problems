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

        vector<int> a(n);

        for (int i = 0;i < n;i++) cin >> a[i];

        vector<vector<int>> pos(n+1);

        for (int i = 0;i < n;i++) pos[a[i]].push_back(i);

        vector<int> dp(n+1,0);

        for (int i = n-1;i >= 0;i--) {

            int best = dp[i+1];

            int v = a[i];
            auto &b = pos[v];

            auto it = lower_bound(b.begin(),b.end(),i);
            int idx = it - b.begin();

            if (idx+v-1 < b.size()) {
                int last = b[idx+v-1];
                best = max(best,v+dp[last+1]);
            }

            dp[i] = best;

        }

        cout << dp[0] << endl;

    }

    return 0;
}