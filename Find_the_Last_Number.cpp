# include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int MSB(int x) {

    if (x <= 0) return -1;

    for (int i = 30;i >= 0;i--)
        if ((x >> i) & 1) return i;
    
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int T;
    cin >> T;

    for (int t = 1;t <= T;t++) {

        int n,b;
        cin >> n;

        int M = MSB(n),p = 0;

        unordered_set<int> a,idx;

        for (int i = 1;i <= n;i++) a.insert(i);

        for (int i = 1;i < n;i++) idx.insert(i);

        for (int i = 0;i <= M;i++) {

            int mask = (1 << i);

            vector<int> Count0,Count1;

            for (auto &x : a) {
            
                if ((x >> i) & 1)
                    Count1.push_back(x);
                else
                    Count0.push_back(x);

            }

            vector<int> setBits,unsetBits;

            for (auto &j : idx) {

                cout << "? " << j << " " << mask << endl;

                cin >> b;

                if (b == 1)
                    setBits.push_back(j);
                else
                    unsetBits.push_back(j);
                
            }

            if (setBits.size() != Count1.size()) {

                for (auto &x : Count0) a.erase(x);
                
                for (auto &j : unsetBits) idx.erase(j);

                p |= mask;

            } else {

                for (auto &x : Count1) a.erase(x);

                for (auto &j : setBits) idx.erase(j);

            }

        }

        cout << "! " << p << endl;

    }

    return 0;
}