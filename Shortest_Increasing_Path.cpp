# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    
    int T;
    cin >> T;

    for (int t = 1;t <= T;t++) {

        int x,y;
        cin >> x >> y;

        if (x == y || y == 1) {
            cout << -1 << endl;
            continue;
        }

        if (y < x && x >= y+2)
            cout << 3 << endl;
        else if (y < x && x < y+2)
            cout << -1 << endl;
        else
            cout << 2 << endl;

    }

    return 0;
}