# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int T;
    cin >> T;

    for (int t = 1;t <= T;t++) {

        int n,s;
        cin >> n >> s;

        vector<int> a(n);

        for (auto &i : a) cin >> i;

        int Count0 = 0,Count1 = 0,Count2 = 0;

        for (int i = 0;i < n;i++) {

            if (a[i] == 0)
                Count0++;
            else if (a[i] == 1)
                Count1++;
            else
                Count2++;

        }

        int totalSum = 1 * Count1 + 2 * Count2;

        if (s-totalSum == 1) {
                
            for (int i = 0;i < Count0;i++) cout << 0 << " ";

            for (int i = 0;i < Count2;i++) cout << 2 << " ";
            
            for (int i = 0;i < Count1;i++) cout << 1 << " ";

            cout << endl;
            
        } else if (s < totalSum) {

            for (auto &i : a)
                cout << i << " ";
            cout << endl;

        } else cout << -1 << endl;

    }

    return 0;
}