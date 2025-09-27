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

        int maxVal = a[n-1];

        ll Count = 0;

        for (int i = 0;i < n-2;i++) {
            for (int j = i+1;j < n-1;j++) {

                int Sum = a[i] + a[j];

                auto lb = lower_bound(a.begin()+j+1,a.end(),Sum);
                auto ub = upper_bound(a.begin()+j+1,a.end(),maxVal-Sum);

                if (ub < lb) Count += lb - ub;
                
            }
        }

        cout << Count << endl;

    }

    return 0;
}