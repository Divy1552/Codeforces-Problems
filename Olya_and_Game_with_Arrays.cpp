# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        vector<vector<int>> v;

        for (int i = 0;i < n;i++) {

            int m; cin >> m;

            vector<int> w(m);

            for (auto &j : w) cin >> j;

            sort(w.begin(),w.end());

            v.push_back(w);

        }

        int minElement1 = INT_MAX;

        for (int i = 0;i < n;i++)
            minElement1 = min(v[i][0],minElement1);

        int minElement2 = INT_MAX;

        for (int i = 0;i < n;i++)
            minElement2 = min(v[i][1],minElement2);

        ll Sum = 0,maxBeauty = minElement1;

        for (int i = 0;i < n;i++)
            Sum += v[i][1];

        maxBeauty = maxBeauty + Sum - minElement2;

        cout << maxBeauty << endl;

    }

    return 0;
}