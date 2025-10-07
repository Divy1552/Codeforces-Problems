# include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve() {

    int n;
    cin >> n;

    vector<int> d(n);

    for (auto &i : d) cin >> i;

    vector<int> l(n),r(n);

    for (int i = 0;i < n;i++) cin >> l[i] >> r[i];

    vector<int> hMin(n+1),hMax(n+1);

    hMin[n] = l[n-1]; hMax[0] = 0;

    for (int i = n-1;i > 0;i--) {

        if (d[i] == 0)
            hMin[i] = max(l[i-1],hMin[i+1]);
        else
            hMin[i] = max(l[i-1],hMin[i+1]-1);

    }

    for (int i = 1;i <= n;i++) {

        if (d[i-1] == 1)
            hMin[i] = max(hMin[i-1]+1,hMin[i]);
        else
            hMin[i] = max(hMin[i-1],hMin[i]);

    }

    for (int i = 1;i <= n;i++) {

        if (d[i-1] == 0)
            hMax[i] = min(r[i-1],hMax[i-1]);
        else
            hMax[i] = min(r[i-1],hMax[i-1]+1);

    }

    for (int i = 1;i <= n;i++) {
        if (hMin[i] > hMax[i]) {
            cout << -1 << endl;
            return;
        }
    }
    
    for (int i = 1;i <= n;i++)
        cout << hMin[i]- hMin[i-1] << " ";
    cout << endl;

}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int T;
    cin >> T;

    while (T--) solve();

    return 0;
}