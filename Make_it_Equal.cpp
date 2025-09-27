# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int T;
    cin >> T;

    for (int t = 1;t <= T;t++) {

        int n,k;
        cin >> n >> k;

        multiset<int> S,T;

        for (int i = 0;i < n;i++) {
            int x; cin >> x;
            S.insert(x);
        }

        for (int i = 0;i < n;i++) {
            int x; cin >> x;
            T.insert(x);
        }

        map<int,int> m;

        for (auto &x : S) m[x % k]++;

        bool flag = true;

        for (auto &y : T) {

            if (!(m[y % k] || m[k - y % k])) {
                flag = false;
                break;
            }

            if (m[y % k]) m[y % k]--;
            else m[k - y % k]--;

        }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }

    return 0;
}