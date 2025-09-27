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
        
        vector<int> a(m);

        for (auto &i : a) cin >> i;

        if (m == 1) {
            cout << n-a[0]+1 << endl;
            continue;
        }

        bool flag = true;

        for (int i = 1;i < m;i++) {
            if (a[i] <= a[i-1]) {
                flag = false;
                break;
            }
        }

        if (flag)
            cout << n-m-a[0]+2 << endl;
        else
            cout << 1 << endl;

    }

    return 0;
}