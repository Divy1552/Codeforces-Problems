# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {

        int n,k;
        cin >> n >> k;

        vector<int> a(n);

        for (auto &i : a) cin >> i;

        if (k != 4) {

            int minCount = INT_MAX;

            for (int i = 0;i < n;i++) {

                int Count = 0;

                while (a[i] % k != 0) {

                    a[i]++; Count++;

                }

                minCount = min(Count,minCount);

            }

            cout << minCount << endl;

        } else {

            int oddCount = 0;
            int evenCount = 0;

            for (int i = 0;i < n;i++) {

                if (a[i] % 2 == 0)
                    evenCount++;
                else
                    oddCount++;

            }

            int minCount = INT_MAX;

            for (int i = 0;i < n;i++) {

                int Count = 0;

                while (a[i] % k != 0) {

                    a[i]++; Count++;

                }

                minCount = min(Count,minCount);

            }

            if (evenCount >= 2) minCount = 0;
            else minCount = min(2-evenCount,minCount);

            cout << minCount << endl;

        }

    }

    return 0;
}