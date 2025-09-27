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

        vector<int> freq(101);

        for (auto &i : a) freq[i]++;

        sort(freq.rbegin(),freq.rend());

        int Min = INT_MAX,Max = INT_MIN;

        for (int i = 1;freq[i-1] != 0;i++) {
            Min = min(freq[i-1],Min);
            Max = max(Min*i,Max);
        }

        cout << Max << endl;

    }

    return 0;
}