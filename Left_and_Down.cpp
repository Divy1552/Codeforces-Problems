# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int T;
    cin >> T;

    for (int t = 1;t <= T;t++) {

        ll a,b,k;
        cin >> a >> b >> k;

        if (k >= max(a,b)/__gcd(a,b))
            cout << 1 << endl;
        else
            cout << 2 << endl;

    }

    return 0;
}