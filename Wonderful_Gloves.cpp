# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {

        int n,k;
        cin >> n >> k;

        vector<int> l(n),r(n);

        for (auto &i : l) cin >> i;
        for (auto &i : r) cin >> i;

        vector<int> Max(n),Min(n);

        for (int i = 0;i < n;i++) {

            Max[i] = max(l[i],r[i]);
            Min[i] = min(l[i],r[i]);

        }
        
        ll x = accumulate(Max.begin(),Max.end(),0LL);

        sort(Min.begin(),Min.end());

        for (int i = n-1;i > n-k;i--) x += Min[i];

        cout << x+1 << endl;

    }

    return 0;
}