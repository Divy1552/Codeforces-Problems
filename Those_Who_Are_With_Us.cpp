# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {

        int n,m;
        cin >> n >> m;

        int a[n][m];

        int maxValue = INT_MIN;

        for (int i = 0;i < n;i++) {
            for (int j = 0;j < m;j++) {
                cin >> a[i][j];
                maxValue = max(a[i][j],maxValue);
            }
        }

        int hash[n][m] = {};

        for (int i = 0;i < n;i++) {
            for (int j = 0;j < m;j++) {
                if (a[i][j] == maxValue)
                    hash[i][j]++;
            }
        }

        int totalCount = 0;

        for (int i = 0;i < n;i++) {
            for (int j = 0;j < m;j++) {
                if (hash[i][j] == 1) totalCount++;
            }
        }

        int rowCount[n] = {};

        for (int i = 0;i < n;i++) {
            for (int j = 0;j < m;j++) {
                if (hash[i][j] == 1) rowCount[i]++;
            }
        }

        int columnCount[m] = {};

        for (int j = 0;j < m;j++) {
            for (int i = 0;i < n;i++) {
                if (hash[i][j] == 1) columnCount[j]++;
            }
        }

        bool flag = false;

        for (int j = 0;j < m;j++) {
            for (int i = 0;i < n;i++) {

                if (hash[i][j] == 1) {

                    if (rowCount[i] + columnCount[j] - 1 == totalCount) {
                        flag = true;
                        goto result;
                    }
                    
                } else {

                    if (rowCount[i] + columnCount[j] == totalCount) {
                        flag = true;
                        goto result;
                    }

                }
                    
            }
        }

        result:

        if (flag) cout << maxValue-1 << endl;
        else cout << maxValue << endl;

    }

    return 0;
}