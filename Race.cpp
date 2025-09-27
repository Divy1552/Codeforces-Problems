# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {

        int a,x,y;
        cin >> a >> x >> y;

        if (a < x && a < y) {

            if (min(x,y) - a >= 1)
                cout << "YES" << endl;

        } else if (a > x && a > y) {

            if (a - max(x,y) >= 1)
                cout << "YES" << endl;

        } else cout << "NO" << endl;

    }

    return 0;
}