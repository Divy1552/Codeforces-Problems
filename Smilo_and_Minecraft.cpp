# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {

        int n,m,k;
        cin >> n >> m >> k;
 
        vector<string> mine(n);

        for (auto &str : mine) cin >> str;

        int totalGold = 0;

        for (int i = 0;i < n;i++) {
            for (int j = 0;j < m;j++) {
                if (mine[i][j] == 'g') totalGold++;
            }
        }
 
        int pf[n+1][m+1] = {};

        for (int i = 1;i <= n;i++) {
            for (int j = 1;j <= m;j++) {
                pf[i][j] = pf[i][j-1] + pf[i-1][j] - pf[i-1][j-1] + (mine[i-1][j-1] == 'g');
            }
        }
 
        int minLost = totalGold;
        
        for (int i = 0;i < n;i++) {
            for (int j = 0;j < m;j++) {

                if (mine[i][j] != '.') continue;

                int r1 = max(0,i-k),r2 = min(n-1,i+k);
                int c1 = max(0,j-k),c2 = min(m-1,j+k);
 
                int ir1 = max(r1,i-k+1),ir2 = min(r2,i+k-1);
                int ic1 = max(c1,j-k+1),ic2 = min(c2,j+k-1);

                int Lost = 0;

                if (ir1 <= ir2 && ic1 <= ic2)
                    Lost = pf[ir2+1][ic2+1] - pf[ir2+1][ic1] - pf[ir1][ic2+1] + pf[ir1][ic1];

                minLost = min(minLost,Lost);

            }
        }
 
        cout << totalGold - minLost << endl;
    
    }

    return 0;
}