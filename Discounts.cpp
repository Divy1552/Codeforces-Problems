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

        vector<int> a(n),b(k);

        for (auto &i : a) cin >> i;

        for (auto &i : b) cin >> i;

        sort(a.begin(),a.end());

        sort(b.begin(),b.end());

        ll Count = 0;

        int i = n-1,c = 0;

        while (i >= 0 && c < k) {
            if (b[c]-1) {
                Count += a[i];
                b[c]--; i--;
            } else {
                c++; i--;
            }
        }

        while (i >= 0) Count += a[i--];

        cout << Count << endl;

    }

    return 0;
}