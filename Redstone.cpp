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

        bool flag = false;

        for (int i = 0;i < n;i++) {

            for (int j = i+1;j < n;j++) {
                if (a[i] == a[j]) {
                    flag = true;
                    if (flag) break;
                }
            }

            if (flag) break;

        }

        if (flag) cout << "YES" << endl;
        else cout << "NO" << endl;

    }

    return 0;
}