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

        vector<int> a(n);

        for (auto &i : a) cin >> i;

        map<int,vector<int>> a_idx;

        for (int i = 0;i < n;i++) a_idx[a[i]].push_back(i);

        sort(a.begin(),a.end());

        vector<ll> pf(n+1);

        for (int i = 1;i <= n;i++) pf[i] = pf[i-1] + a[i-1];

        map<int,int> m;

        for (int i = 1;i <= n;i++) {

            int count = 0;

            auto ub = upper_bound(a.begin(),a.end(),pf[i]);

            if (ub != a.end())
                count = distance(a.begin(),ub);
            else
                count = n;

            while (count > i) {

                ub = upper_bound(a.begin(),a.end(),pf[count]);

                if (distance(a.begin(),ub) == count) break;

                count = distance(a.begin(),ub);

            }

            m[a[i-1]] = count-1;

        }

        vector<int> result(n);

        for (auto &idx : a_idx) {
            for (auto &i : idx.second) {
                result[i] = m[idx.first];
            }
        }

        for (auto &i : result)
            cout << i << " ";
        cout << endl;

    }

    return 0;
}