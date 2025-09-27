# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;
 
int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {

        int n,k;
        cin >> n >> k;

        string s;
        cin >> s;

        map<char,int> m;

        for (auto &ch : s) m[ch]++;

        int OddCount = 0;

        for (auto &i : m)
            if (i.second % 2 != 0) OddCount++;

        if (OddCount > k+1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
  
    }

    return 0;
}