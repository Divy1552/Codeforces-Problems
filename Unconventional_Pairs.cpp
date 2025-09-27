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

        sort(a.begin(),a.end());

        int result = INT_MIN;

        for (int i = 1;i < n;i += 2) result = max(a[i]-a[i-1],result);

        cout << result << endl;

    }

    return 0;
}