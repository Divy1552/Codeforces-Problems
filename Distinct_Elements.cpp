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

        vector<ll> a(n+1),b(n+1); int x = 1;

        for (int i = 1;i <= n;i++) cin >> b[i];

        for (int i = 1;i <= n;i++) {

            ll d = b[i]-b[i-1];

            if (i-d)
                a[i] = a[i-d];
            else
                a[i] = x++;

            cout << a[i] << " ";

        }
        
        cout << endl;

    }

    return 0;
}