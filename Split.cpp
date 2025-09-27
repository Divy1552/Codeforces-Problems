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

        map<int,int> freq;

        for (auto &i : a) freq[i]++;

        bool flag = true;

        for (auto &x : freq) {

            int i = x.first,j = x.second;

            if (j % k != 0) flag = false;

        }

        if (!flag) {
            cout << 0 << endl;
            continue;
        }

        map<int,int> m;

        ll Count = 0; int r = 0;

        for (int l = 0;l < n;l++) {

            while (r < n && m[a[r]] < freq[a[r]]/k) {m[a[r]]++; r++;}

            Count += r-l; m[a[l]]--;

        }

        cout << Count << endl;

    }

    return 0;
}