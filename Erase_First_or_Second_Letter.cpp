# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        string s;
        cin >> s;

        map<char,int> m;

        for (int i = 0;i < n;i++) {

            if (m.find(s[i]) == m.end()) m[s[i]] = i;

        }

        ll Count = 0;

        for (auto &i : m) Count += n - i.second;

        cout << Count << endl;
        
    }

    return 0;
}