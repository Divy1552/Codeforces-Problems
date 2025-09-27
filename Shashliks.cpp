# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;
 
int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {

        int k,a,b,x,y;
        cin >> k >> a >> b >> x >> y;

        int count = 0;

        if (x > y) {

            if (k >= b) {
                int val = (k-b) / y + 1;
                count += val;
                k -= val * y;
            }

            if (a < b && k >= a) {
                int val = (k-a) / x + 1;
                count += val;
                k -= val * x;
            }

        } else {

            if (k >= a) {
                int val = (k-a) / x + 1;
                count += val;
                k -= val * x;
            }

            if (a > b && k >= b) {
                int val = (k-b) / y + 1;
                count += val;
                k -= val * y;
            }

        }

        cout << count << endl;

    }

    return 0;
}