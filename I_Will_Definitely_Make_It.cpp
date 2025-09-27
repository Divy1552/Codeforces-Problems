# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    
    int T;
    cin >> T;

    for (int t = 1;t <= T;t++) {

        int n,k;
        cin >> n >> k;

        vector<int> h(n);

        for (auto &i : h) cin >> i;

        int Height = h[k-1],Time = 0;

        sort(h.begin(),h.end());

        bool flag = true;

        while (Height < h[n-1]) {

            int ub = *upper_bound(h.begin(),h.end(),Height);

            if (ub - Height > Height - Time) flag = false;

            if (!flag) break; Time += ub-Height; Height = ub;

        }

        if(flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }

    return 0;
}