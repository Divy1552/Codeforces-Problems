# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

ll power(int a,int b) {

    ll result = 1;

    for (int i = 1;i <= b;i++) result *= a;

    return result;
}

int closest_power(ll a,int b) {

    int result = 0;

    while (a > 0) {
        if (a/b == 0) break;
        a /= b; result++;
    }

    return result;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int T;
    cin >> T;

    for (int t = 1;t <= T;t++) {

        int n;
        cin >> n;

        ll minCost = 0;

        while (n > 0) {

            int x = closest_power(n,3); n -= power(3,x);

            minCost += (power(3,x+1) + x * power(3,x-1));

        }

        cout << minCost << endl;

    }

    return 0;
}