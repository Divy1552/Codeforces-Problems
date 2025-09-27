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

        string a;
        cin >> a;

        int m;
        cin >> m;

        string b;
        cin >> b;

        string c;
        cin >> c;

        for (int i = m-1;i >= 0;i--)
            if (c[i] == 'V') cout << b[i];

        cout << a;

        for (int i = 0;i < m;i++)
            if (c[i] == 'D') cout << b[i];

        cout << endl;

    }

    return 0;
}