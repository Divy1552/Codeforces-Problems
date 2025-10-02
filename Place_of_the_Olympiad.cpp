# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    
    int T;
    cin >> T;

    for (int t = 1;t <= T;t++) {

        int n,m,k;
        cin >> n >> m >> k;

        int Max = k % n == 0 ? k/n : k/n + 1;

        if (m == Max)
            cout << m << endl;
        else if (m < 2*Max -1)
            cout << (Max % (m-Max+1) == 0 ? Max/(m-Max+1) : Max/(m-Max+1) + 1) << endl;
        else
            cout << 1 << endl;

    }

    return 0;
}