# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    
    int T;
    cin >> T;

    for (int t = 1;t <= T;t++) {

        int n;
        cin >> n;

        string s;
        cin >> s;

        bool flag = true;

        bool curr = (s[0] == '1');

        int Count0 = 0;

        for (int i = 0;i < n;i++) {

            if (s[i] == '0') Count0++; if (i == 0) continue;

            if (s[i] == s[i-1] && s[i] == '0') curr = false;
                
            if (s[i] == s[i-1] && s[i] == '1') {

                if (curr && (Count0 & 1)) flag = false;

                curr = true; Count0 = 0;

            }

        }

        if (curr && (Count0 & 1) && s[n-1] == '1') flag = false;

        cout << (flag ? "YES" : "NO") << endl;

    }

    return 0;
}