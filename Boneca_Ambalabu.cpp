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

        vector<int> a(n),Count(31);

        for (auto &i : a) cin >> i;

        for (int i = 0;i < n;i++)
            for (int j = 0;j <= 30;j++)
                if ((a[i] >> j) & 1) Count[j]++;

        ll result = 0;

        for (int i = 0;i < n;i++) {

            ll maxVal = 0;

            for (int j = 0;j <= 30;j++) {

                if ((a[i] >> j) & 1)
                    maxVal += (n-Count[j]) * (1LL << j);
                else
                    maxVal += Count[j] * (1LL << j);

            }
            
            result = max(maxVal,result);

        }

        cout << result << endl;

    }

    return 0;
}