# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {

        int n,s;
        cin >> n >> s;

        int pottedCount = 0;

        vector<pair<int,int>> d(n),p(n);

        for (int i = 0;i < n;i++) {

            cin >> d[i].first >> d[i].second >> p[i].first >> p[i].second; 

            int dist_x = (d[i].first == 1) ? (s - p[i].first) : p[i].first;
            int dist_y = (d[i].second == 1) ? (s - p[i].second) : p[i].second;

            if (dist_x == dist_y) pottedCount++;

        }

        cout << pottedCount << endl;

    }

    return 0;
}