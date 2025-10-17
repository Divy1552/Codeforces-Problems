# include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int MSB(int x) {

    for (int i = 30;i >= 0;i--)
        if ((x >> i) & 1) return i;

    return -1;
}

int prevNum(int x,vector<int> &s) {

    int i = 0; if (!x) return 0;

    while (!((x >> s[i]) & 1)) i++;

    x &= ~(1 << s[i]);

    while (i) {
        x |= (1 << s[i-1]);
        i--;
    }

    return x;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int T;
    cin >> T;

    for (int t = 1;t <= T;t++) {

        int n,x;
        cin >> n >> x;

        if (x == 0) {

            for (int i = 0;i < n;i++)
                cout << 0 << " ";
            cout << endl;

            continue;
        }

        vector<int> setBits;

        for (int i = 0;i <= 30;i++) {
            if ((x >> i) & 1) {
                setBits.push_back(i);
            }
        }

        int MEX = 0;

        for (int i = 0;i <= 30;i++) {
            if (!((x >> i) & 1)) {
                MEX = (1 << i);
                break;
            }
        }

        int Max = (1 << MSB(x));

        if (n <= Max) {

            for (int i = 0;i < min(n-1,MEX);i++) cout << i << " ";

            int y = x; cout << y << " ";

            if (n-1 > MEX) {

                for (int i = 1;i < n-MEX;i++) {

                    y = prevNum(y,setBits);

                    cout << y << " ";

                }

            }

        } else {

            for (int i = 0;i < min(n,MEX);i++) cout << i << " ";

            if (n > MEX) {

                int y = x;

                for (int i = 0;i < n-MEX;i++) {

                    y = prevNum(y,setBits);

                    cout << y << " ";

                }

            }

        }

        cout << endl;

    }

    return 0;
}