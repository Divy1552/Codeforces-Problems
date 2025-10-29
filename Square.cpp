# include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int T;
    cin >> T;

    for (int t = 1;t <= T;t++) {

        int a,b,c,d;
        cin >> a >> b >> c >> d;

        if (a == b && b == c && c == d)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }

    return 0;
}