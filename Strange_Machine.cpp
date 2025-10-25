# include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int T;
    cin >> T;

    for (int t = 1;t <= T;t++) {

        int n,q; string s;
        cin >> n >> q >> s;

        vector<int> a(q);

        for (auto &i : a) cin >> i;

        bool flag = true;

        for (auto &c : s)
            if (c == 'B') flag = false;

        for (int i = 0;i < q;i++) {

            if (!flag) {

                int k = 0,Count = 0;

                while (a[i]) {

                    if (s[k % n] == 'A')
                        a[i] -= 1;
                    else
                        a[i] = floor(a[i]/2);

                    k++; Count++;

                }

                cout << Count << endl;
                
            } else cout << a[i] << endl;

        }

    }

    return 0;
}