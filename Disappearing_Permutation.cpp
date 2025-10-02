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

        vector<int> p(n+1),d(n+1);

        for (int i = 1;i <= n;i++) cin >> p[i];

        for (int i = 1;i <= n;i++) cin >> d[i];

        set<int> s;

        for (int i = 1;i <= n;i++) {

            while(!s.count(d[i])) {
                s.insert(d[i]);
                d[i] = p[d[i]];
            }

            cout << s.size() << " ";

        }

        cout << endl;

    }

    return 0;
}