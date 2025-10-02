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

        vector<int> a(n);

        for (auto &i : a) cin >> i;

        sort(a.begin(),a.end());

        int U = a[(n+k)/2];

        int D = a[(n-k+1)/2-1];

        cout << U - D + 1 << endl;

    }

    return 0;
}