# include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int T;
    cin >> T;

    for (int t = 1;t <= T;t++) {

        int n,k;
        cin >> n >> k;

        vector<int> a(n);

        for (auto &i : a) cin >> i;

        vector<int> freq(n+1);

        for (auto &i : a) freq[i]++;

        vector<int> pCount(n+1);

        for (int i = 1;i <= n;i++)
            pCount[i] = pCount[i-1] + freq[i];

        for (int d = n;d >= 1;d--) {

            int Count = pCount[d-1];

            if (3*d+1 <= n) Count += pCount[min(4*d-1,n)] - pCount[3*d];
            if (2*d+1 <= n) Count += pCount[min(3*d-1,n)] - pCount[2*d];
            if (d+1 <= n) Count += pCount[min(2*d-1,n)] - pCount[d];

            if (Count <= k) {cout << d << endl; break;}

        }

    }

    return 0;
}