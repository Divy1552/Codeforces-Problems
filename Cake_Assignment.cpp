# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    
    int T;
    cin >> T;

    for (int t = 1;t <= T;t++) {

        int k; ll x;
        cin >> k >> x;

        if (x == (1LL << k)) {
            cout << 0 << endl;
            continue;
        }

        ll c = x,v = (1LL << (k+1))-x;
        
        vector<int> result;

        while (c != (1LL << k)) {

            if (c < (1LL << k)) {

                v -= c; c *= 2;
                result.push_back(1);

            } else {

                c -= v; v *= 2;
                result.push_back(2);

            }

        }

        reverse(result.begin(),result.end());

        cout << result.size() << endl;

        for (auto &i : result)
            cout << i << " ";
        cout << endl;

    }

    return 0;
}