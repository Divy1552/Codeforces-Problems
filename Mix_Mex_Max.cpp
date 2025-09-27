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

        int x = -1; bool flag = true;

        for (int i = 0;i < n;i++) {

            if (a[i] == -1) continue;

            if (a[i] == 0) flag = false;
            
            if (!flag) break;

            if (x == -1) x = a[i];

            if (a[i] != x) flag = false;
            
            if (!flag) break;

        }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }

    return 0;
}