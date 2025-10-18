# include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int T;
    cin >> T;

    vector<pair<int,int>> Directions = {{1,0},{-1,0},{0,1},{0,-1}};

    for (int t = 1;t <= T;t++) {

        int n,m;
        cin >> n >> m;

        int a[n][m];

        for (int i = 0;i < n;i++) {
            for (int j = 0;j < m;j++) {
                cin >> a[i][j];
            }
        }

        map<int,int> v;

        for (int i = 0;i < n;i++) {
            for (int j = 0;j < m;j++) {

                if (!v[a[i][j]]) v[a[i][j]] = 1;

                for (auto &d : Directions) {

                    int x = i + d.first,y = j + d.second;

                    if (x < 0 || y < 0 || x >= n || y >= m) continue;

                    if (a[x][y] == a[i][j]) {v[a[i][j]] = 2; break;}

                }

            }
        }

        ll Sum = 0;

        int Max = INT_MIN;

        for (auto &[x,y] : v) {
            Max = max(y,Max);
            Sum += y;
        }

        cout << Sum - Max << endl;

    }

    return 0;
}