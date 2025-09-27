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

        vector<int> Max(n);

        for (int i = 1;i < n;i++)
            Max[i] = max(Max[i-1],a[i-1]);

        vector<ll> pf(n+1);

        for (int i = n;i >= 1;i--)
            pf[i-1] = pf[i] + a[i-1];

        for (int i = 0;i < n;i++)
            cout << pf[n-i] + max(Max[n-i-1],a[n-i-1]) << " ";

        cout << endl;

    }

    return 0;
}