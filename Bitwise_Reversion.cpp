# include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int T;
    cin >> T;

    for (int t = 1;t <= T;t++) {

        int x,y,z;
        cin >> x >> y >> z;

        if (((y & z) | x) == x && ((x & z) | y) == y && ((x & y) | z) == z)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }

    return 0;
}