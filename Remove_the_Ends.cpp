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

        vector<int> a(n);

        for (auto &i : a) cin >> i;

        vector<ll> L(n),R(n);

        L[0] = max(a[0],0);

        for (int i = 1;i < n;i++)
            L[i] = L[i-1] + max(a[i],0);

        R[n-1] = min(a[n-1],0);

        for (int i = n-2;i >= 0;i--)
            R[i] = R[i+1] + min(a[i],0);

        for (auto &i : L) i = abs(i);

        for (auto &i : R) i = abs(i);

        ll maxCoins = 0;

        for (int i = 0;i < n;i++)
            maxCoins = max(L[i]+R[i],maxCoins);

        cout << maxCoins << endl;

    }

    return 0;
}