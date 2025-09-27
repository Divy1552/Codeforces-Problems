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

        s.erase(s.begin());
        s.pop_back();

        int bal = 0; bool flag = true;

        for (int i = 0;i < s.length();i++) {

            if (s[i] == '(') bal++;
            else if (s[i] == ')') bal--;

            if (bal < 0) {
                flag = false;
                break;
            }

        }

        if (flag)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;

    }

    return 0;
}