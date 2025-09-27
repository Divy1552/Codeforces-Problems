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

        vector<int> a(n),b(n);

        for (auto &i : a) cin >> i;

        for (auto &i : b) cin >> i;

        ll result = 0;

        for (int i = 0;i < n;i++) if (a[i] > b[i]) swap(a[i],b[i]);

        for (int i = 0;i < n;i++) result += b[i]-a[i];

        vector<pair<ll,ll>> p;

        for (int i = 0;i < n;i++) p.push_back({a[i],b[i]});

        sort(p.begin(),p.end());

        bool flag = true;

        for (int i = 1;i < n;i++) {
            if (p[i].first <= p[i-1].second) {
                flag = false; break;
            }
        }

        if (!flag) {
            cout << result << endl;
            continue;
        }

        ll Min = LLONG_MAX;

        for (int i = 1;i < n;i++) Min = min(p[i].first-p[i-1].second,Min);

        cout << result + 2*Min << endl;

    }

    return 0;
}