# include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int T;
    cin >> T;

    for (int t = 1;t <= T;t++) {

        int n; cin >> n;

        string s; cin >> s;

        set<int> p;

        for (int i = 0;i < n;i++)
            if (s[i] == '0') p.insert(i+1);

        cout << p.size() << endl;

        for (auto &i : p)
            cout << i << " ";
        cout << endl;

    }

    return 0;
}