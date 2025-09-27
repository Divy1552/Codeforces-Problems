# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

ll exp(int a,int b) {

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

        int n,k;
        cin >> n >> k;

        if (k >= n) {
            cout << 3 * 1LL * n << endl;
            continue;
        }

        int minDeals = 0,n_copy = n;

        int power = closest_power(n,3);
        
        int x = power; vector<ll> a(power+1);

        while (n_copy > 0) {

            int dealsCount = n_copy/exp(3,x); a[x] = dealsCount;

            n_copy -= dealsCount * exp(3,x); minDeals += a[x--];

        }

        if (k < minDeals) {
            cout << -1 << endl;
            continue;
        }

        int y = power,extraDeals = k-minDeals;

        while (extraDeals > 0) {

            if (y == 0) break;

            if (2 * a[y] <= extraDeals) {
                extraDeals -= 2 * a[y];
                a[y-1] += 3 * a[y]; a[y--] = 0;
            } else {
                a[y-1] += 3 * (extraDeals/2);
                a[y] -= extraDeals/2; extraDeals = 0;
            }

        }

        ll minCost = 0;

        for (int i = 0;i < a.size();i++) {

            if (i == 0)
                minCost += 3 * a[i];
            else
                minCost += a[i] * (exp(3,i+1) + i * exp(3,i-1));

        }

        cout << minCost << endl;

    }

    return 0;
}