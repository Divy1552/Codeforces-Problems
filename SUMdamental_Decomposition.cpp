# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {

        int n,x;
        cin >> n >> x;

        if (x == 0) {

            if (n & 1)
                cout << ((n > 1) ? n+3 : -1) << endl;
            else
                cout << n << endl;

        } else if (x == 1) {

            if (n & 1)
                cout << n << endl;
            else
                cout << n+3 << endl;

        } else {

            int c = __builtin_popcount(x);

            if (n <= c)
                cout << x << endl;
            else if ((n - c) & 1)
                cout << x+n-c+1 << endl;
            else
                cout << x+n-c << endl;

        }

    }

    return 0;
}