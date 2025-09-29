# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    
    int T;
    cin >> T;

    for (int t = 1;t <= T;t++) {

        int n,m; string s;
        cin >> n >> m >> s;

        set<int> a;

        for (int i = 1;i <= m;i++) {

            int x;
            cin >> x;

            a.insert(x);

        }

        int curr = 1;

        for (auto &c : s) {

            curr++;

            if (c == 'B') while (a.count(curr)) curr++;

            a.insert(curr);

            if (c == 'B') while (a.count(curr)) curr++;

        }

        cout << a.size() << endl;

        for (auto &i : a)
            cout << i << " ";
        cout << endl;

    }

    return 0;
}