# include <bits/stdc++.h>

using namespace std;

typedef long long ll;

auto y(int i,int x,int r) {

    ll a = r*1LL*r - (i-x)*1LL*(i-x);

    return sqrtl(a);
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int T;
    cin >> T;

    for (int t = 1;t <= T;t++) {

        int n,m;
        cin >> n >> m;

        map<int,int> Count;

        vector<int> x(n),r(n);

        for (auto &i : x) cin >> i;

        for (auto &i : r) cin >> i;

        for (int i = 0;i < n;i++) {
            for (int j = x[i]-r[i];j <= x[i]+r[i];j++) {

                int a = (int) y(j,x[i],r[i]);

                Count[j] = max(2*a+1,Count[j]);

            }
        }

        ll result = 0;

        for (auto &i : Count) result += i.second;

        cout << result << endl;

    }

    return 0;
}