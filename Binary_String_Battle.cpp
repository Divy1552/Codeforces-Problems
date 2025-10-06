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

        string s;
        cin >> s;

        int Count = 0;

        for (auto &c : s)
            if (c == '1') Count++;

        if (Count <= k) {
            cout << "Alice" << endl;
            continue;
        }


        if (n >= 2*k)
            cout << "Bob" << endl;
        else
            cout << "Alice" << endl;
    
    }

    return 0;
}