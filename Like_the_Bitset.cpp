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

        bool bad = false; int a = 0;

        for (int i = 0;i < k;i++) a += (s[i] == '1');

        if (a == k) bad = true;

        for (int i = k;i < n && !bad;i++) {

            a += (s[i] == '1');
            a -= (s[i-k] == '1');

            if (a == k) bad = true;

        }

        if (bad) {
            cout << "NO" << endl;
            continue;
        }

        int Count1 = count(s.begin(),s.end(),'1');

        vector<int> p(n);

        int b = 1,c = Count1 + 1;
        
        for (int i = 0; i < n; i++) {

            if (s[i] == '1') p[i] = b++;
            else p[i] = c++;

        }

        cout << "YES" << endl;

        for (auto &i : p)
            cout << i << " ";
        cout << endl;

    }

    return 0;
}