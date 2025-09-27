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

        if (n == 1 && k == 1) {
            cout << "NO" << endl;
            continue;
        }

        if (n == 1 && k == 2) {
            cout << "YES" << endl;
            continue;
        }

        if (k > 1) {
            cout << "NO" << endl;
            continue;
        }

        if (n == 2 || n == 3) {
            cout << "YES" << endl;
            continue;
        }

        bool isPrime = true;

        for (int i = 2;i * i <= n;i++) {
            if (n % i == 0) {
                isPrime = false; break;
            }
        }

        if (isPrime)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }

    return 0;
}