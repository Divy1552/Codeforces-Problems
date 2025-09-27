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

        for (auto &i : a) cin >> i;

        int result = 1,prev = a[0];

        for (int i = 1;i < n;i++) {
            if (a[i]-1 > prev) {
                prev = a[i];
                result++;
            }
        }

        cout << result << endl;

    }

    return 0;
}