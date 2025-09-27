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

        for (int i = 1;i <= k;i++) s.push_back('1');
        for (int i = 1;i <= n-k;i++) s.push_back('0');

        cout << s << endl;

    }

    return 0;
}