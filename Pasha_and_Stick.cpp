# include <bits/stdc++.h>

using namespace std;

int main() {
    
    long long int n;
    cin >> n;

    long long int count = 0;

    for (long long int i = 1;i <= n/4;i++) {
        if (n % 2 == 0) {
            if ((n/2 - i) != n/4)
                count += 1;
        } else break;
    }

    cout << count << endl;

    return 0;
}