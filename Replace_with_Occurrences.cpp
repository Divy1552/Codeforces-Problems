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

        vector<int> b(n);

        for (auto &i : b) cin >> i;

        vector<vector<int>> freq(n+1);

        for (int i = 0;i < n;i++) freq[b[i]].push_back(i);

        bool flag = true;

        for (int i = 0;i < n;i++) {
            if (freq[b[i]].size() % b[i]) {
                flag = false; break;
            }
        }

        if (!flag) {
            cout << -1 << endl;
            continue;
        }

        vector<int> a(n); int c = 1;

        vector<vector<int>> p(n+1);
    
        for (auto &x : freq) {
            int size = x.size();
            for (int &i : x) {
                if (!a[i]) a[i] = c; size--;
                if (size % b[i] == 0) c++;
            }
        }

        for (auto &i : a)
            cout << i << " ";
        cout << endl;
    
    }

    return 0;
}