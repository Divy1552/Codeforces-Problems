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

        vector<int> a(n);

        for (auto &i : a) cin >> i;

        vector<int> b = a;

        sort(b.begin(),b.end());

        vector<int> result;

        for (int i = 0;i < n;i++)
            if (a[i] != b[i]) result.push_back(a[i]);
            
        if (result.size()) {

            cout << "YES" << endl;

            cout << result.size() << endl;

            for (auto &i : result)
                cout << i << " ";
            cout << endl;

        } else cout << "NO" << endl;

    }

    return 0;
}