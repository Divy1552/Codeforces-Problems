# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {

        int n,p;
        cin >> n >> p;

        vector<int> a(n),b(n);

        for (auto &i : a) cin >> i;
        for (auto &i : b) cin >> i;

        multimap<int,int> m;

        for (int i = 0;i < n;i++) m.insert({b[i],a[i]});

        ll minCost = p; n--;

        for (auto &i : m) {

            if (n == 0) break;

            if (i.first <= p) {

                if (i.second >= n) {

                    minCost += i.first * 1LL * n;
                    i.second -= n; n = 0;

                } else {

                    minCost += i.first * 1LL * i.second;
                    n -= i.second; i.second = 0;

                }

            } else {

                minCost += p * 1LL * n; n = 0;

            }

        }

        cout << minCost << endl;

    }

    return 0;
}