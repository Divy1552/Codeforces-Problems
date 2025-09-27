# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

vector<ll> FloydWarshall(vector<vector<int>> &g,vector<int> &x) {

    int n = g.size()-1; int INF = INT_MAX;
    
    vector<vector<int>> d(n+1,vector<int>(n+1));

    for (int i = 1;i <= n;i++) {
        for (int j = 1;j <= n;j++) {
            if (i != j) d[i][j] = INF;
            if (g[i][j]) d[i][j] = g[i][j];
        }
    }

    vector<ll> result(n);

    reverse(x.begin(),x.end());

    for (int k = 0;k < n;k++) {

        for (int i = 1;i <= n;i++) {
            for (int j = 1;j <= n;j++) {
                if (d[i][x[k]] != INF && d[x[k]][j] != INF) {
                    d[i][j] = min(d[i][x[k]]+d[x[k]][j],d[i][j]);
                }
            }
        }

        for (int i = 0;i <= k;i++) {
            for (int j = 0;j <= k;j++) {
                result[n-1-k] += d[x[i]][x[j]];
            }
        }

    }

    return result;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n;
    cin >> n;

    vector<vector<int>> g(n+1,vector<int>(n+1));

    for (int i = 1;i <= n;i++) {
        for (int j = 1;j <= n;j++) {
            cin >> g[i][j];
        }
    }

    vector<int> x(n);

    for (auto &i : x) cin >> i;

    vector<ll> result = FloydWarshall(g,x);

    for (auto &i : result) cout << i << " ";

    return 0;
}