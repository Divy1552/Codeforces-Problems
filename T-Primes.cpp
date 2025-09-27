# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

bool isPrime(int n) {

    if (n <= 1) return false;

    if (n == 2 || n == 3) return true;

    for (int i = 2;i <= sqrt(n);i++) {
        if (i > 2 && (i % 2 == 0)) continue;
        if (n % i == 0) return false; 
    }

    return true;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n;
    cin >> n;

    vector<ll> x(n);

    for (auto &i : x) cin >> i;

    for (int i = 0;i < n;i++) {

        if (sqrt(x[i]) - (int) sqrt(x[i]))
            cout << "NO" << endl;
        else if (isPrime(sqrt(x[i])))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        
    }

    return 0;
}