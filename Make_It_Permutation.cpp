# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        cout << 2 * n - 3 << endl;

        for (int i = 1;i <= n;i++) {
            if (i >= 2) cout << i << " " << 1 << " " << i << endl;
            if (i < n-1) cout << i << " " << i+1 << " " << n << endl;
        }

    }

    return 0;
}