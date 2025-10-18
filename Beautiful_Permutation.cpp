# include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int T;
    cin >> T;

    for (int t = 1;t <= T;t++) {

        int n,x;
        cin >> n;

        int l = 1,r = n;

        int Sum1 = 0,Sum2 = 0;

        cout << 2 << " " << l << " " << r << endl;

        cin >> x; Sum2 = x;

        int d = Sum2 - n*1LL*(n+1)/2;

        while (r - l >= d) {

            int mid = l + (r-l)/2;

            cout << 1 << " " << l << " " << mid << endl;

            cin >> x; Sum1 = x;

            cout << 2 << " " << l << " " << mid << endl;

            cin >> x; Sum2 = x;

            int k = Sum2 - Sum1;

            if (k == 0)
                l = mid+1;
            else if (k == d)
                r = mid;
            else {
                l = mid-k+1;
                r = mid-k+d;
            }

        }

        cout << "! " << l << " " << r << endl;

    }

    return 0;
}