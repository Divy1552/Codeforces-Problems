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

        vector<pair<int,int>> v;

        for (int i = 0;i < n;i++) {

            int l,r,real;
            cin >> l >> r >> real;

            v.push_back({l,real});

        }

        sort(v.begin(),v.end());

        for (int i = 0;i < n;i++) {

            int l = v[i].first,real = v[i].second;

            if (k >= l && real > k) k = real;

        }

        cout << k << endl;

    }

    return 0;
}