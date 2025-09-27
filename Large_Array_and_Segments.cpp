# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {

        int n,k; ll x;
        cin >> n >> k >> x;

        vector<int> a(n);

        for (auto &i : a) cin >> i;

        ll aSum = accumulate(a.begin(),a.end(),0LL);

        if (aSum * k < x) {
            cout << 0 << endl;
            continue;
        }

        ll l = n * 1LL * k,Sum = 0;

        if (x/aSum > 0) {
            Sum += x/aSum * 1LL * aSum;
            l -= x/aSum * 1LL * n;
            k -= x/aSum;
        }

        if (Sum >= x) {
            cout << l+1 << endl;
            continue;
        }

        for (int i = 0;i < n;i++) {

            Sum += a[n-1-i];

            if (Sum >= x) {
                l -= i;
                break;
            }

        }

        cout << l << endl;

    }

    return 0;
}