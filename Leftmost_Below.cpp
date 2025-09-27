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

        vector<int> b(n);

        for (auto &i : b) cin >> i;

        vector<int> pMin(n); pMin[0] = b[0];

        for (int i = 1;i < n;i++) pMin[i] = min(b[i],pMin[i-1]);

        bool flag = true;

        for (int i = 1;i < n;i++) {
            if (b[i] >= 2*pMin[i-1]) {
                flag = false; break;
            }
        }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }

    return 0;
}