# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

struct DisjointSetUnion {

    vector<int> parent;

    void initialise(int n) {

        parent.resize(n+1);

        for (int i = 1;i <= n;i++) parent[i] = i;

    }

    int find(int x) {

        if (parent[x] != x) parent[x] = find(parent[x]);

        return parent[x];
    }

    bool unite(int x,int y) {

        int fx = find(x),fy = find(y);

        if (fx == fy) return false;

        parent[fx] = fy; return true;
    }

};

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int T;
    cin >> T;

    for (int t = 1;t <= T;t++) {

        int n;
        cin >> n;

        DisjointSetUnion DSU;

        DSU.initialise(2*n);

        vector<int> indices;

        for (int i = 1;i <= n;i++) {

            int a,b; cin >> a >> b;

            if (DSU.unite(a,b)) indices.push_back(i);

        }

        int Count = indices.size();

        cout << Count << endl;

        for (auto &i : indices)
            cout << i << " ";
        cout << endl;

    }

    return 0;
}