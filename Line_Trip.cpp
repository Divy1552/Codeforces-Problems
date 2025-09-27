# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;
 
int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {

        int n,x;
        cin >> n >> x;

        vector<int> v(n);

        for (auto &i : v) cin >> i;

        int max_dist = v[0];
        
        for (int i = 0;i < n-1;i++)
            max_dist = max(v[i+1] - v[i],max_dist);
        
        max_dist = max(2*(x-v[n-1]),max_dist);

        cout << max_dist << endl;

    }

    return 0;
}