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

        vector<pair<int,int>> p;

        int l = 1,r = n,k = 0;

        while (r-l > 1 && a[l-1]) l++;

        while (r-l > 1 && a[r-1]) r--;

        if (l == 1 && r == n) {p.push_back({n/2+1,r}); p.push_back({l,n/2}); k = n-2;}
        
        else if (r == l+1 && (!a[l-1] || !a[r-1])) {p.push_back({l,r}); k = 1;}

        else if (!a[l-1] && !a[r-1]) {p.push_back({l,r}); k = r-l;}

        p.push_back({1,n-k}); cout << p.size() << endl;

        for (auto &x : p) cout << x.first << " " << x.second << endl;

    }

    return 0;
}