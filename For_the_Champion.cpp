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

        ll maxSum = LLONG_MIN,maxDiff = LLONG_MIN;

        for (int i = 0;i < n;i++) {

            ll x,y;
            cin >> x >> y;

            maxSum = max(x+y,maxSum);
            maxDiff = max(x-y,maxDiff);

        }

        ll k = 1000000000,s = 0;

        cout << "? U " << k << endl; cin >> s;
        cout << "? U " << k << endl; cin >> s;
        cout << "? R " << k << endl; cin >> s;
        cout << "? R " << k << endl; cin >> s;

        ll Sum = s - 4*k + maxSum;

        cout << "? D " << k << endl; cin >> s;
        cout << "? D " << k << endl; cin >> s;
        cout << "? D " << k << endl; cin >> s;
        cout << "? D " << k << endl; cin >> s;

        ll Diff = s - 4*k + maxDiff;

        ll X = (Sum + Diff)/2,Y = (Sum - Diff)/2;

        cout << "! " << X << " " << Y << endl;

    }

    return 0;
}