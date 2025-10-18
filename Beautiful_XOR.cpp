# include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int MSB(int x) {

    for (int i = 31;i >= 0;i--)
        if ((x >> i) & 1) return i;

    return -1;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int T;
    cin >> T;

    for (int t = 1;t <= T;t++) {

        int a,b;
        cin >> a >> b;

        if (a == b) {
            cout << 0 << endl;
            continue;
        }

        if ((a ^ b) <= a) {
            cout << 1 << endl;
            cout << (a ^ b) << endl;
            continue;
        }

        int M1 = MSB(a);
        int M2 = MSB(b);

        if (M1 < M2) {
            cout << -1 << endl;
            continue;
        }

        int x1 = (1 << M1)-1;

        a = a ^ x1;

        int x2 = a ^ b;

        cout << 2 << endl;

        cout << x1 << " " << x2 << endl;

    }

    return 0;
}