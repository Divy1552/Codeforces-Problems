# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

const ll MOD = 1000000007LL;

struct Fenwick {

    int n; vector<ll> bit;

    Fenwick(): n(0) {}

    void init(int _n) {n = _n; bit.assign(n+1,0);}

    void add(int idx,ll val){

        if (val == 0) return;

        while (idx <= n){
            bit[idx] += val;
            if (bit[idx] >= MOD) bit[idx] -= MOD;
            idx += idx & -idx;
        }

    }

    ll sumPrefix(int idx) {

        ll result = 0;

        while (idx > 0){
            result += bit[idx];
            if (result >= MOD) result -= MOD;
            idx -= idx & -idx;
        }

        return result;
    }

    ll rangeSum(int l,int r) {

        if (r < l) return 0;

        ll x = sumPrefix(r) - sumPrefix(l-1);

        if (x < 0) x += MOD;

        return x;
    }

};

struct Update {int m,M; ll val;};

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    
    int T;
    cin >> T;

    for (int t = 1;t <= T;t++) {

        int n;
        cin >> n;

        vector<int> a(n);

        int Max = 0;

        for (auto &i : a) cin >> i;

        for (auto &i : a) Max = max(i,Max);

        vector<ll> dp1(Max+1, 0);

        Fenwick bit1; bit1.init(Max);

        vector<Fenwick> Row(Max+1),Col(Max+1);

        for (int i = 1;i <= Max;i++) {Row[i].init(Max); Col[i].init(Max);}

        ll result = 1;

        for (int i = 0;i < n;i++){

            int v = a[i];

            ll Sum1 = bit1.sumPrefix(v);
            ll New1 = (Sum1+1) % MOD;

            vector<Update> Updates;
            
            Updates.reserve(2*(Max+5));

            for (int u = v+1;u <= Max;u++){
                ll val = dp1[u];
                if (val != 0) Updates.push_back({v,u,val});
            }

            for (int m = 1;m <= v;m++){
                ll s = Row[m].sumPrefix(v);
                if (s != 0) Updates.push_back({m,v,s});
            }

            for (int m = v+1;m <= Max;m++){
                ll s = Col[m].sumPrefix(v);
                if (s != 0) Updates.push_back({v,m,s});
            }

            for (auto &u : Updates){

                int m1 = u.m,m2 = u.M;

                ll val = u.val % MOD;

                if (val == 0) continue;

                Row[m1].add(m2,val);
                Col[m2].add(m1,val);

                result += val;

                if (result >= MOD) result -= MOD;

            }

            dp1[v] += New1;

            if (dp1[v] >= MOD) dp1[v] -= MOD;

            bit1.add(v,New1);

            result += New1;

            if (result >= MOD) result -= MOD;

        }

        cout << (result % MOD) << endl;

    }

    return 0;
}