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

        vector<int> a(n),b(n);

        for (auto &i : a) cin >> i;
        for (auto &i : b) cin >> i;

        ll Sum = -1; int Sum_idx = 0;

        bool flag = true;

        for (int i = 0;i < n;i++) {
            if (b[i] != -1) {
                Sum = a[i] + b[i];
                Sum_idx = i; break;
            }
        }

        for (int i = Sum_idx+1;i < n;i++)
            if (b[i] != -1 && a[i] + b[i] != Sum) flag = false;

        if (flag) {

            if (Sum != -1) {

                bool isValid = true;

                for (int i = 0;i < n;i++) {
                    if (b[i] == -1 && (Sum < a[i] || Sum - a[i] > k)) {
                        isValid = false; break;
                    }
                }

                if (isValid)
                    cout << 1 << endl;
                else
                    cout << 0 << endl;

            } else {

                int Min = *min_element(a.begin(),a.end());
                int Max = *max_element(a.begin(),a.end());

                cout << Min-Max+k+1 << endl;

            }
        
        } else cout << 0 << endl;

    }

    return 0;
}