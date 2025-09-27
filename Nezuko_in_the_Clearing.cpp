# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    
    int T;
    cin >> T;

    for (int t = 1;t <= T;t++) {

        int h,d;
        cin >> h >> d;

        int l = 0,r = d;

        while (l < r) {

            int m = l + (r-l)/2;

            int s = m+1,a = d/s,k = d % s;

            ll C = k * ((a+1)*1LL*(a+2))/2 + (s-k) * (a*1LL*(a+1))/2;

            if (C <= h+m-1)
                r = m;
            else
                l = m+1;

        }

        cout << d + l << endl;

    }

    return 0;
}