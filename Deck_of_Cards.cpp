# include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int T; 
    cin >> T;

    for (int t = 1;t <= T;t++) {

        int n,k; string s;
        cin >> n >> k >> s;

        int Count0 = 0,Count1 = 0,Count2 = 0;

        for (char &c : s) {

            if (c == '0')
                Count0++;
            else if (c == '1')
                Count1++;
            else
                Count2++;

        }

        string result(n,'-');

        if (k >= n) {
            cout << result << endl;
            continue;
        }

        for (int i = 1;i <= n;i++) {

            if (i <= Count0 || i > n - Count1)
                result[i-1] = '-';
            else if (i > Count0 + Count2 && i <= n - (Count1 + Count2))
                result[i-1] = '+';
            else
                result[i-1] = '?';

        }

        cout << result << endl;

    }

    return 0;
}