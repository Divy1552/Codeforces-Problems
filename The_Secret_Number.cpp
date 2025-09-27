# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

ll power(int a,int b) {

    ll result = 1;

    for (int i = 1;i <= b;i++) result *= a;

    return result;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int T;
    cin >> T;

    for (int t = 1;t <= T;t++) {

        ll n;
        cin >> n;

        int Count = 0;

        vector<ll> x;

        for (int k = 1;k <= 18;k++) {

            if ((n / (1LL + power(10,k)) == 0)) break;

            if (((n % (1LL + power(10,k)) != 0))) continue;

            x.push_back((n / (1LL + power(10,k)))); Count++;

        }

        cout << Count << endl;

        reverse(x.begin(),x.end());

        if (Count > 0) {
            for (auto &i : x)
                cout << i << " ";
            cout << endl;
        }

    }

    return 0;
}