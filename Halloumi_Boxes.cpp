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

        vector<int> v(n);

        for (auto &i : v) cin >> i;

        bool flag = true;

        for (int i = 0;i < n-1;i++) {
            if (v[i] > v[i+1]) {
                flag = false;
                break;
            }
        }

        if (flag) cout << "YES" << endl;
        else if (k >= 2) cout << "YES" << endl;
        else cout << "NO" << endl;

    }

    return 0;
}