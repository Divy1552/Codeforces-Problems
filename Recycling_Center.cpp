# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int T;
    cin >> T;

    for (int t = 1;t <= T;t++) {

        int n,c;
        cin >> n >> c;

        vector<ll> a(n);

        for (auto &i : a) cin >> i;

        sort(a.begin(),a.end());

        for (int i = 0;i < n;i++) {

            if (a[0] > c) break;

            auto ub = upper_bound(a.begin(),a.end(),c);

            a.erase(prev(ub));

            for (int j = 0;j < a.size();j++) a[j] *= 2;

        }

        int result = a.size();

        cout << result << endl;

    }

    return 0;
}