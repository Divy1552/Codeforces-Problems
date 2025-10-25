# include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int T;
    cin >> T;

    for (int t = 1;t <= T;t++) {

        int n;
        cin >> n;

        string a,b;
        cin >> a >> b;

        int Count1 = 0,Count2 = 0;

        for (int i = 0;i < n;i++) {

            if (i & 1) {

                if (a[i] == '0') Count1++;

                if (b[i] == '0') Count2++;

            } else {

                if (a[i] == '0') Count2++;
                
                if (b[i] == '0') Count1++;

            }

        }

        bool flag = (Count1 >= n/2) && (Count2 >= (n+1)/2);

        cout << (flag ? "YES" : "NO") << endl;

    }

    return 0;
}