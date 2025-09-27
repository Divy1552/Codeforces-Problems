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

        for (int i = 0;i < n;i++) {

            if (i & 1) {

                if (i == n-1)
                    cout << 2 << " ";
                else
                    cout << 3 << " ";

            } else cout << -1 << " ";

        }

        cout << endl;

    }

    return 0;
}