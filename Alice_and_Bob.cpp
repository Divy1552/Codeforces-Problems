# include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int T;
    cin >> T;

    for (int t = 1;t <= T;t++) {

        int n,a;
        cin >> n >> a;

        vector<int> v(n);

        for (auto &i : v) cin >> i;

        sort(v.begin(),v.end());

        auto lb = lower_bound(v.begin(),v.end(),a);

        auto ub = upper_bound(v.begin(),v.end(),a);

        if (lb == v.end()) {
            cout << v.back() << endl;
            continue;
        }

        if (lb == v.begin()) {

            if (*lb == a)
                cout << v[0]+1 << endl;
            else
                cout << v[0] << endl;

            continue;
        }

        int l = distance(v.begin(),lb);

        int u = distance(v.begin(),ub);

        if (*lb == a) {

            if (n-u >= l)
                cout << *ub << endl;
            else
                cout << *prev(lb) << endl;

        } else {

            if (n-l >= l)
                cout << *lb << endl;
            else
                cout << *prev(lb) << endl;

        }

    }

    return 0;
}