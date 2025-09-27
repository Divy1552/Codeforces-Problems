# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {

        string s;
        cin >> s;

        map<char,int> m;

        for (int i = 0;i < s.length();i++) m[s[i]]++;

        string t;

        for (int i = 0;i < s.length();i++) {

            if (s[i] == '0' && m['1'] > 0) {

                t.push_back('1'); m['1']--;

            } else if (s[i] == '1' && m['0'] > 0) {

                t.push_back('0'); m['0']--;
                
            } else break;

        }

        cout << s.length() - t.length() << endl;

    }

    return 0;
}