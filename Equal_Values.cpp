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
 
        vector<int> a(n+1);

        for (int i = 1;i <= n;i++) cin >> a[i];

        vector<int> left(n+1,1),right(n+1,n);

        for (int i = 2;i <= n;i++) {

            if (a[i] == a[i-1])
                left[i] = left[i-1];
            else
                left[i] = i;

        }

        for (int i = n-1;i >= 1;i--) {

            if (a[i] == a[i+1])
                right[i] = right[i+1];
            else
                right[i] = i;

        }
 
        ll totalCost = LLONG_MAX;
 
        for (int i = 1;i <= n;i++) {
 
            ll currentCost = 0;
 
            int leftCount = left[i] - 1;
            currentCost +=  leftCount * 1LL * a[i];
 
            int rightCount = n - right[i];
            currentCost += rightCount * 1LL * a[i];
 
            totalCost = min(currentCost,totalCost);
 
        }
 
        cout << totalCost << endl;
 
    }
 
    return 0;
}