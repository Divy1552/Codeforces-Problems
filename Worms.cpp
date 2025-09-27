# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);

    for (auto &i : a) cin >> i;

    int m;
    cin >> m;

    vector<int> q(m);

    for (auto &i : q) cin >> i;

    vector<int> pf(n+1);

    for (int i = 1;i <= n;i++) pf[i] = pf[i-1] + a[i-1];

    for (int i = 0;i < m;i++) {
        auto lb = lower_bound(pf.begin(),pf.end(),q[i]);
        cout << distance(pf.begin(),lb) << endl;
    }

    return 0;
}