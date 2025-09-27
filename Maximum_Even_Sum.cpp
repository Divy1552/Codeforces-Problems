# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    
    int T;
    cin >> T;

    for (int t = 1;t <= T;t++) {

        ll a,b;
        cin >> a >> b;

        if ((a & 1) && (b & 1))
            cout << max(a+b,a*b+1) << endl;
        else if (!(a & 1) && (b & 1))
            cout << -1 << endl;
        else if (!(a & 1) && !(b & 1))
            cout << max(a+b,(a*b)/2+2) << endl;
        else {

            if (b % 4 == 0)
                cout << max(2*a+b/2,(a*b)/2+2) << endl;
            else
                cout << -1 << endl;

        }

    }

    return 0;
}