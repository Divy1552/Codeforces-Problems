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

        vector<int> p(n);

        for (auto &i : p) cin >> i;

        int k = 0,maxIdx = 0;

        for (int i = 1;i < n;i++) {
            if (p[i] > p[maxIdx]) {
                maxIdx = i;
            }
        }

        k++; int i = maxIdx,j = maxIdx;

        while (i >= 0 && j < n && j-i != n-1) {

            if ((i > 0) && (p[i-1] == n-k)) {
                i--; k++;
            } else if ((j < n-1) && (p[j+1] == n-k)) {
                j++; k++;
            } else break;

        }

        if (k != n) cout << "NO" << endl;
        else cout << "YES" << endl;

    }

    return 0;
}