# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

const int M = 998244353;

ll power(int a,int b) {

    ll result = 1;

    while (b) {
        if (b & 1) result = (result * 1LL * a) % M;
        a = (a * 1LL * a) % M; b >>= 1;
    }

    return result;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int T;
    cin >> T;

    for (int t = 1;t <= T;t++) {

        int n;
        cin >> n;

        vector<int> p(n),q(n);

        for (auto &i : p) cin >> i;
        for (auto &i : q) cin >> i;

        vector<int> P(n),Q(n);

        P[0] = 0; Q[0] = 0;

        for (int i = 1;i < n;i++) {

            if (p[i] > p[P[i-1]]) P[i] = i;
            else P[i] = P[i-1];

            if (q[i] > q[Q[i-1]]) Q[i] = i;
            else Q[i] = Q[i-1];

        }

        vector<int> r(n);

        for (int i = 0;i < n;i++) {

            if (max(p[P[i]],q[i-P[i]]) > max(q[Q[i]],p[i-Q[i]]))
                r[i] = (power(2,p[P[i]]) + power(2,q[i-P[i]])) % M;
            else if (max(p[P[i]],q[i-P[i]]) < max(q[Q[i]],p[i-Q[i]]))
                r[i] = (power(2,q[Q[i]]) + power(2,p[i-Q[i]])) % M;
            else if (min(p[P[i]],q[i-P[i]]) > min(q[Q[i]],p[i-Q[i]]))
                r[i] = (power(2,p[P[i]]) + power(2,q[i-P[i]])) % M;
            else
                r[i] = (power(2,q[Q[i]]) + power(2,p[i-Q[i]])) % M;

        }

        for (auto &i : r)
            cout << i << " ";
        cout << endl;

    }

    return 0;
}