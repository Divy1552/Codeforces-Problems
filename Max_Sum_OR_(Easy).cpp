# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

int computeMSB(int x) {

    for (int i = 31;i >= 0;i--)
        if ((x >> i) & 1) return i;
    
    return -1;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    
    int T;
    cin >> T;

    for (int t = 1;t <= T;t++) {

        int l,r;
        cin >> l >> r;

        int n = r-l+1;

        vector<int> a(n,-1); a[0] = 0;

        for (int i = n-1;i > 0;i--) {

            int MSB = computeMSB(i);

            int b = i ^ ((1 << (MSB+1))-1);

            if (a[i] == -1) {a[i] = b; a[b] = i;}
            
        }

        ll result = 0;

        for (int i = 0;i < n;i++) result += a[i] | i;

        cout << result << endl;

        for (auto &i : a)
            cout << i << " ";
        cout << endl;

    }

    return 0;
}