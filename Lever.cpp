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

        vector<int> a(n),b(n);

        for (auto &i : a) cin >> i;

        for (auto &i : b) cin >> i;

        int Sum = 0;

        for (int i = 0;i < n;i++) Sum += max(0,a[i]-b[i]);

        cout << Sum + 1 << endl;

    }

    return 0;
}