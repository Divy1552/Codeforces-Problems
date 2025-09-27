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

        ll Count = 0;

        for (int i = 1;i < n;i += 2) {

            if (a[i-1] > a[i]) {
                Count += a[i-1]-a[i];
                a[i-1] = a[i];
            }

            if (i < n-1 && a[i+1] > a[i]) {
                Count += a[i+1]-a[i];
                a[i+1] = a[i];
            }

        }

        for (int i = 1;i < n;i += 2) {
            if (i < n-1 && a[i] < a[i-1]+a[i+1]) {
                Count += a[i-1]+a[i+1]-a[i];
                a[i+1] -= a[i-1]+a[i+1]-a[i];
            }
        }

        cout << Count << endl;

    }

    return 0;
}