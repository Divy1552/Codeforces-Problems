# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int T;
    cin >> T;

    for (int t = 1;t <= T;t++) {

        int n,a,b;
        cin >> n >> a >> b;

        if (a <= b) {

            if (n % 2 == 0 && b % 2 == 0)
                cout << "YES" << endl;
            else if (n % 2 != 0 && b % 2 != 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;

        } else {

            if ((a-b) % 2 != 0) {
                cout << "NO" << endl;
                continue;
            }

            if (n % 2 == 0 && b % 2 == 0)
                cout << "YES" << endl;
            else if (n % 2 != 0 && b % 2 != 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;

        }

    }

    return 0;
}