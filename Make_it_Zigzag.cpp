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

        vector<int> a(n);

        for (auto &i : a) cin >> i;

        vector<int> pMax(n);

        pMax[0] = a[0];

        for (int i = 1;i < n;i++)
            pMax[i] = max(pMax[i-1],a[i]);

        ll result = 0;

        for (int i = 0;i < n;i += 2) {
            
            int left = (i > 0) ? pMax[i-1] : INT_MAX;

            int right  = (i < n-1) ? pMax[i+1] : INT_MAX;

            int Min = min(left,right);

            if (a[i] >= Min) result += a[i] - Min + 1;

        }

        cout << result << endl;

    }

    return 0;
}