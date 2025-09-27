# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    
    int T;
    cin >> T;

    for (int t = 1;t <= T;t++) {

        int n,m;
        cin >> n >> m;

        vector<set<int>> S;

        for (int i = 0;i < n;i++) {

            int l;
            cin >> l;

            set<int> temp;

            for (int j = 0;j < l;j++) {

                int x;
                cin >> x;

                temp.insert(x);

            }

            S.push_back(temp);

        }

        vector<vector<int>> visited(m+1);

        for (int i = 0;i < n;i++) {
            for (auto &j : S[i]) {
                visited[j].push_back(i+1);
            }
        }

        bool flag = true;

        for (int i = 1;i <= m;i++) {
            if (visited[i].empty()) {
                flag = false;
                break;
            }
        }

        if (!flag) {
            cout << "NO" << endl;
            continue;
        }

        set<int> fixSets;

        for (int i = 1;i <= m;i++) {
            if (visited[i].size() == 1) {
                fixSets.insert(visited[i][0]);
            }
        }

        if (fixSets.size() <= n-2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }

    return 0;
}