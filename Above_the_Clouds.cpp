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

        for (int i = 0;i < n;i++) m[s[i]]++;

        bool flag = false;

        for (int i = 1;i < n-1;i++)
            if (m[s[i]] >= 2) flag = true;

        if (flag)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;

    }

    return 0;
}