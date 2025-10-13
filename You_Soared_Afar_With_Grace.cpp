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

        vector<int> a(n+1),b(n+1);

        for (int i = 1;i <= n;i++) cin >> a[i];

        for (int i = 1;i <= n;i++) cin >> b[i];

        int oddCount = 0;

        bool flag = true;

        set<pair<int,int>> p;

        map<pair<int,int>,int> m;

        for (int i = 1;i <= n;i++) m[{a[i],b[i]}] = i;

        for (int i = 1;i <= n;i++) {

            int j = m[{b[i],a[i]}];

            if (j > 0) {

                p.insert({i,j});

                if (i != j)
                    p.insert({j,i});
                else
                    oddCount++;

            } else flag = false;

        }

        if ((n & 1) && (oddCount != 1)) flag = false;

        if ((n % 2 == 0) && oddCount) flag = false;

        if (!flag) {
            cout << -1 << endl;
            continue;
        }

        int Count = 0;

        vector<int> c(n+1);

        map<pair<int,int>,bool> visited;

        for (auto &x : p) {

            int i = x.first,j = x.second;

            if (visited[{i,j}]) continue;

            if (i != j) {

                c[Count+1] = i;
                c[n-Count] = j;
                
                Count++;

            } else c[n/2+1] = i;

            visited[{i,j}] = true;
            visited[{j,i}] = true;

        }

        vector<pair<int,int>> pos(n+1);

        for (int i = 1;i <= n;i++) pos[i] = {c[i],i};

        sort(pos.begin(),pos.end());

        vector<pair<int,int>> swaps;

        for (int i = 1;i <= n;i++) {

            if (pos[i].second == i) continue;

            while (pos[i].second != i) {

                int d = pos[i].second;

                swaps.push_back({i,d});
                
                swap(pos[i],pos[d]);

            }
        
        }

        cout << swaps.size() << endl;

        for (auto &x : swaps) {

            int i = x.first,j = x.second;

            cout << i << " " << j << endl;

        }

    }

    return 0;
}