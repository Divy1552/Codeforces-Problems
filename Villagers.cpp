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

        vector<int> g(n);

        for (auto &i : g) cin >> i;

        sort (g.begin(),g.end());

        ll result = 0;

        for (int i = n-1;i >= 0;i -= 2) result += g[i];

        cout << result << endl;

    }

    return 0;
}