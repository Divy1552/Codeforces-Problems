# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;
 
int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {

        int w,h,a,b;
        cin >> w >> h >> a >> b;

        int x1,y1,x2,y2;
        cin >> x1 >> y1 >> x2 >> y2;

        if ((x1 != x2 && abs(x1-x2) % a == 0)
        || (y1 != y2 && abs(y1-y2) % b == 0))
            cout << "Yes" << endl;
        else
            cout << "No" << endl; 

    }

    return 0;
}