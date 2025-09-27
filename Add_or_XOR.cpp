# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int T;
    cin >> T;

    for (int t = 1;t <= T;t++) {

        int a,b,x,y;
        cin >> a >> b >> x >> y;

        int minCost = 0;

        bool isPossible = true;

        while (a != b && isPossible) {

            if (a < b) {

                if (a % 2 == 0)
                    minCost += min(x,y);
                else
                    minCost += x;

                a = a + 1;

            } else {

                if (a % 2 != 0)
                    minCost += y;
                else
                    isPossible = false;

                a = a - 1;

            }

        }

        if (isPossible)
            cout << minCost << endl;
        else
            cout << -1 << endl;

    }

    return 0;
}