# include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int T;
    cin >> T;

    for (int t = 1;t <= T;t++) {

        int n,m;
        cin >> n >> m;

        vector<int> a(n),b(m);

        for (auto &i : a) cin >> i;

        for (auto &i : b) cin >> i;

        sort(b.begin(),b.end());

        bool flag = true;

        a[0] = min(b[0]-a[0],a[0]);

        for (int i = 1;i < n;i++) {

            auto it = lower_bound(b.begin(),b.end(),a[i]+a[i-1]);

            if (it != b.end()) {

                if (a[i] >= a[i-1])
                    a[i] = min(*it-a[i],a[i]);
                else
                    a[i] = *it-a[i];

            }

        }

        for (int i = 0;i < n-1;i++) {
            if (a[i] > a[i+1]) {
                flag = false;
                break;
            }
        }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }

    return 0;
}