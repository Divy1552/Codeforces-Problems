# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

ll Q1(int n,int x,int y) {

    if (n == 1) {

        if (x == 1 && y == 1)
            return 1;
        else if (x == 2 && y == 2)
            return 2;
        else if (x == 2 && y == 1)
            return 3;
        else
            return 4;

    }

    if (x <= (1 << n-1) && y <= (1 << n-1))
        return Q1(n-1,x,y);
    else if (x > (1 << n-1) && y > (1 << n-1))
        return (1LL << (2*n-2)) + Q1(n-1,x-(1 << n-1),y-(1 << n-1));
    else if (x > (1 << n-1) && y <= (1 << n-1))
        return 2*(1LL << (2*n-2)) + Q1(n-1,x-(1 << n-1),y);
    else
        return 3*(1LL << (2*n-2)) + Q1(n-1,x,y-(1 << n-1));

}

pair<int,int> Q2(int n,ll k) {

    if (n == 1) {

        if (k == 1)
            return {1,1};
        else if (k == 2)
            return {2,2};
        else if (k == 3)
            return {2,1};
        else
            return {1,2};

    }
    
    if (k <= (1LL << (2*n-2))) {

        auto p = Q2(n-1,k);

        return {p.first,p.second};

    } else if (k <= 2*(1LL << (2*n-2))) {

        auto p = Q2(n-1,k-(1LL << (2*n-2)));

        return {(1 << n-1) + p.first,(1 << n-1) + p.second};

    } else if (k <= 3*(1LL << (2*n-2))) {

        auto p = Q2(n-1,k-2*(1LL << (2*n-2)));

        return {(1 << n-1) + p.first,p.second};

    } else {

        auto p = Q2(n-1,k-3*(1LL << (2*n-2)));

        return {p.first,(1 << n-1) + p.second};

    }

}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    
    int T;
    cin >> T;

    for (int t = 1;t <= T;t++) {

        int n,q;
        cin >> n >> q;

        for (int i = 1;i <= q;i++) {

            string s; cin >> s;

            if (s == "->") {

                int x,y;
                cin >> x >> y;

                cout << Q1(n,x,y) << endl;

            } else {

                ll k; cin >> k;

                auto p = Q2(n,k);

                cout << p.first << " " << p.second << endl;

            }

        }

    }

    return 0;
}