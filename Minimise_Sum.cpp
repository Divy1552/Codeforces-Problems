# include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        vector<int> a(n);

        for (int &i : a) cin >> i;

        vector<int> Min(n);

        Min[0] = a[0];

        for (int i = 1;i < n;i++)
            Min[i] = min(Min[i-1],a[i]);

        vector<ll> pSum(n);

        pSum[0] = Min[0];

        for (int i = 1; i < n; ++i)
            pSum[i] = pSum[i-1] + Min[i];

        ll Sum = pSum[n-1];

        for (int i = 0;i < n-1;i++) {

            ll currentSum = 0;

            if (i > 0) {

                int newMin = min(Min[i-1],a[i] + a[i+1]);
                currentSum = pSum[i-1] + newMin;
                
            } else currentSum = a[0] + a[1];

            Sum = min(currentSum,Sum);

        }

        cout << Sum << endl;

    }

    return 0;
}