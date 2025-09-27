# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

bool isBeautiful(vector<int> &a) {

    if (a.size() < 2) return false;

    for (int i = 0;i < a.size()-1;i++) {
        if (a[i] >= a[i+1]-1 && a[i] <= a[i+1]+1) {
            return true;
        }
    }

    return false;
}

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

        if (!isBeautiful(a)) {

            if (n == 2) {
                cout << -1 << endl;
                continue;
            }

            bool flag = false;

            for (int i = 0;i < n-1;i++) {

                int Min = min(a[i],a[i+1]);
                int Max = max(a[i],a[i+1]);

                if (i > 0) {
                    if (a[i-1] >= Min - 1 && a[i-1] <= Max + 1) {
                        flag = true; break;
                    }
                }
                
                if (i < n-2) {
                    if (a[i+2] >= Min - 1 && a[i+2] <= Max + 1) {
                        flag = true; break;
                    }
                }

            }

            if (flag)
                cout << 1 << endl;
            else
                cout << -1 << endl;

        } else cout << 0 << endl;

    }

    return 0;
}