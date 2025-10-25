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

        int result = 0;
        
        while (n/3 > 0) {

            int q = n/3;

            result += q;

            int r = (n % 3);

            n = q + r;
        }

        cout << result << endl;

    }

    return 0;
}