# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int T;
    cin >> T;

    for (int t = 1;t <= T;t++) {

        int n,m;
        cin >> n >> m;

        if (n == 1 || m == 1)
            cout << "NO" << endl;
        else if (n == 2 && m == 2)
            cout << "NO" << endl;
        else
            cout << "YES" << endl; 

    }

    return 0;
}