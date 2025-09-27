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

        int changesCount = (s[0] == '1' ? 1 : 0);

        for (int i = 0;i < n-1;i++)
            if (s[i] != s[i+1]) changesCount++;

        if (changesCount >= 3)
            cout << n + changesCount - 2 << endl;
        else if (changesCount == 2)
            cout << n + changesCount - 1 << endl;
        else
            cout << n + changesCount << endl;

    }

    return 0;
}