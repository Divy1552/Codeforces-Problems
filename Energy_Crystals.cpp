# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {

        int x;
        cin >> x;

        vector<int> a(3);

        int minCount = 0;

        while (min({a[0],a[1],a[2]}) < x) {

            if (min({a[0],a[1],a[2]}) == a[0])
                a[0] = 2 * min(a[1],a[2]) + 1;
            else if (min({a[0],a[1],a[2]}) == a[1])
                a[1] = 2 * min(a[2],a[0]) + 1;
            else
                a[2] = 2 * min(a[0],a[1]) + 1;

            minCount++;

        }

        cout << minCount << endl;

    }

    return 0;
}