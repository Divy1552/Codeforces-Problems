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

        vector<int> a(n+1);

        for (auto &i : p) if (i != 0) a[i]++;

        vector<int> b;

        for (int i = 1;i <= n;i++)
            if (!a[i]) b.push_back(i);

        int idx = b.size()-1,left = 0,right = n-1;

        for (auto &i : p) if (!i) i = b[idx--];

        bool flag = true;

        for (int i = 0;i < n;i++) {
            if (p[i] != i+1) {
                flag = false; break;
            }
        }

        if (flag) {cout << 0 << endl; continue;}

        for (int i = 0;i < n;i++) {
            if (p[i] != i+1) {
                left = i; break;
            }
        }

        for (int i = n-1;i >= 0;i--) {
            if (p[i] != i+1) {
                right = i; break;
            }
        }

        cout << right - left + 1 << endl;

    }

    return 0;
}