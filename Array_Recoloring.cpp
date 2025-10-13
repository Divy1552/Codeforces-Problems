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

        vector<int> a(n);

        for (auto &i : a) cin >> i;

        if (n == 2) {
            cout << a[0] + a[1] << endl;
            continue;
        }

        vector<pair<int,int>> pos(n);

        for (int i = 0;i < n;i++) pos[i] = {a[i],i};

        sort(pos.rbegin(),pos.rend());

        ll Sum = 0;

        if (k == 1) {

            int i = pos[0].second,j = pos[1].second;

            if ((i > 0 && i < n-1) && (j > 0 && j < n-1)) {
                cout << a[i] + max(a[0],a[n-1]) << endl;
                continue;
            }
            
        }

        for (int i = 0;i <= k;i++) Sum += pos[i].first;

        cout << Sum << endl;

    }

    return 0;
}