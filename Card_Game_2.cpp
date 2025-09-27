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

        vector<ll> pf(n+1);

        for (int i = n-1;i >= 0;i--)
            pf[i] = pf[i+1] + max(0,a[i]);

        ll maxScore = 0;

        for (int i = 0;i < n;i++) {

            ll Score = ((i+1) & 1 ? a[i] : 0) + pf[i+1];

            maxScore = max(Score,maxScore);

        }

        cout << maxScore << endl;

    }

    return 0;
}