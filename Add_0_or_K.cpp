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

        vector<ll> a(n),c(n);

        for (auto &i : a) cin >> i;

        for (auto &i : a) {
            cout << i + k*(i % (k+1));
            cout << " ";
        }

        cout << endl;

    }

    return 0;
}