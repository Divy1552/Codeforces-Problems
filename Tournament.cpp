# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int T;
    cin >> T;

    for (int t = 1;t <= T;t++) {

        int n,j,k;
        cin >> n >> j >> k;

        vector<int> a(n);

        for (auto &i : a) cin >> i;

        if(k == 1) {

            int Max = *max_element(a.begin(),a.end());

            if (a[j-1] == Max)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
            
        } else cout << "YES" << endl;

    }

    return 0;
}