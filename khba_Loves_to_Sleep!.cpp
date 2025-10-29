# include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int T;
    cin >> T;

    for (int t = 1;t <= T;t++) {

        int n,k,x;
        cin >> n >> k >> x;

        vector<int> a(n);

        for (auto &i : a) cin >> i;

        sort(a.begin(),a.end());

        set<int> s; int Count = 0;

        map<int,vector<pair<int,int>>,greater<int>> m;

        for (int i = 0;i < n-1;i++) {

            if (a[i] == a[i+1]) continue;

            int dist = a[i+1]-a[i];

            int mid = (a[i]+a[i+1])/2;

            if (dist == 1) {

                m[0].push_back({mid,2});
                m[0].push_back({mid+1,2});

            } else if (dist & 1) {

                m[dist/2].push_back({mid,-1});

                m[dist/2].push_back({mid+1,1});

            } else m[dist/2].push_back({mid,0});

        }

        m[a[0]].push_back({0,1});

        m[x-a[n-1]].push_back({x,-1});

        while (Count < k && !m.empty()) {

            auto it = m.begin();

            int dist = it->first;

            for (auto &p : it->second) {

                if (Count >= k) break;

                int position = p.first;
                
                int type = p.second;

                if (!s.count(position)) {

                    s.insert(position); Count++;

                    if (type >= 0) m[dist-1].push_back({position+1,1});

                    if (type <= 0) m[dist-1].push_back({position-1,-1});

                }

            }

            m.erase(it);

        }

        for (auto &i : s)
            cout << i << " ";
        cout << endl;

    }

    return 0;
}