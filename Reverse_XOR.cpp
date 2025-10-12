# include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int MSB(int n) {

    for (int i = 30;i >= 0;i--)
        if ((n >> i) & 1) return i;

    return -1;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int T;
    cin >> T;

    for (int t = 1;t <= T;t++) {

        int n;
        cin >> n;

        if (n == 0) {
            cout << "YES" << endl;
            continue;
        }

        int M = MSB(n);

        if (n & 1) {

            bool flag = true;

            for (int i = 0;i <= M/2;i++) {
                if (((n >> i) & 1) != ((n >> (M-i)) & 1)) {
                    flag = false; break;
                }
            }

            if (flag) flag = (__builtin_popcount(n) & 1) ? false : true;

            if (flag)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;

        } else {

            int i = 0;
            
            while (!((n >> i) & 1)) i++;

            M += i;

            bool flag = true;

            for (int i = 0;i <= M/2;i++) {
                if (((n >> i) & 1) != ((n >> (M-i)) & 1)) {
                    flag = false; break;
                }
            }

            if (flag) flag = (__builtin_popcount(n) & 1) ? false : true;

            if (flag)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;

        }

    }

    return 0;
}