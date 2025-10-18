# include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int T;
    cin >> T;

    for (int t = 1;t <= T;t++) {

        int n,m;
        cin >> n >> m;

        vector<ll> Sum(n),Score(n);

        for (int i = 0;i < n;i++) {
            for (int j = 0;j < m;j++) {
                
                ll x; cin >> x;

                Score[i] += (m-j)*x;
                Sum[i] += x;
                
            }
        }

        sort(Sum.rbegin(),Sum.rend());

        ll result = Score[n-1];

        for (int i = 1;i < n;i++)
            result += Score[i-1] + m*Sum[i-1]*(n-i);

        cout << result << endl;

    }

    return 0;
}