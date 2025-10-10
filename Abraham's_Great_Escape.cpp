# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    
    int T;
    cin >> T;

    for (int t = 1;t <= T;t++) {

        int n,k;
        cin >> n >> k;

        int Blocks = n*n - k;

        if (Blocks == 1) {
            cout << "NO" << endl;
            continue;
        }

        vector<vector<char>> a(n+1,vector<char>(n+1,'D'));

        int rowBlock = Blocks/n;

        int columnBlock = Blocks - rowBlock*n;

        for (int i = 1;i < rowBlock;i++) {

            for (int j = 1;j < n;j++) a[i][j] = 'R';

            a[i][n] = 'L';

        }

        if (rowBlock >= 1) {

            for (int j = 1;j <= columnBlock;j++) a[rowBlock+1][j] = 'U';

            for (int j = columnBlock+1;j < n;j++) a[rowBlock][j] = 'R';
            
            a[rowBlock][n] = 'L';

        } else {

            for (int j = 0;j < columnBlock;j++) a[1][j] = 'R';

            a[1][columnBlock] = 'L';

        }

        cout << "YES" << endl;

        for (int i = 1;i <= n;i++) {

            for (int j = 1;j <= n;j++) cout << a[i][j];

            cout << endl;
            
        }

    }

    return 0;
}