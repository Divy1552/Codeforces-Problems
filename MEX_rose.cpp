# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

int MEX(vector<int> &a) {

    set<int> s;

    for (auto &i : a) s.insert(i);

    for (int i = 0;i <= a.size();i++)
        if (s.find(i) == s.end()) return i;

}

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

        if (MEX(a) == k) {
            cout << 0 << endl;
            continue;
        }

        vector<int> freq(n+1);

        for (auto &i : a) freq[i]++;

        int Count = 0;

        for (int i = 0;i < k;i++)
            if (freq[i] == 0) Count++;

        cout << max(Count,freq[k]) << endl;

    }

    return 0;
}