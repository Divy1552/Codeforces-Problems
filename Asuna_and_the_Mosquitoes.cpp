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

        ll Sum = 0;

        for (auto &i : a) Sum += i;

        int k = 0;

        for (auto &i : a) k += (i & 1);

        if (k == 0 || k == n)
            cout << *max_element(a.begin(),a.end()) << endl;
        else
            cout << Sum - k + 1 << endl;

    }

    return 0;
}