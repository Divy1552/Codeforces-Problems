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

        vector<int> a(n),b(n);

        for (auto &i : a) cin >> i;

        for (auto &i : b) cin >> i;

        if (a[n-1] != b[n-1]) {
            cout << "NO" << endl;
            continue;
        }

        bool flag = true;

        for (int i = n-2;i >= 0;i--) {

            if (a[i] == b[i]) continue; 

            if ((a[i+1] != (a[i] ^ b[i])) && ((b[i+1] != (a[i] ^ b[i])))) {
                flag = false;
                break;
            }

        }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }

    return 0;
}