# include <bits/stdc++.h>
 
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int T;
    cin >> T;

    for (int t = 1;t <= T;t++) {

        int n;
        cin >> n;

        long long minOperations = 0;

        for (int i = 1;i <= n;i++) {

            long long a,b,c,d;
            cin >> a >> b >> c >> d;

            if (a > c) minOperations += a-c;

            if (b > d) {

                if (a > c)
                    minOperations += c;
                else
                    minOperations += a;

                minOperations += b-d;
        
            }

        }

        cout << minOperations << endl;

    }

    return 0;
}