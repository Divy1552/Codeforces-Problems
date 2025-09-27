# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {

        int n,k;
        cin >> n >> k;

        vector<int> a(n),b(n);

        for (auto &i : a) cin >> i;
        for (auto &i : b) cin >> i;

        int EXP = a[0]; k--;

        priority_queue<int> pq;

        pq.push(b[0]);

        int maxEXP = EXP + pq.top() * k;

        for (int i = 1;i < n;i++) {

            if (k == 0) break;
                
            EXP += a[i]; k--;
            
            pq.push(b[i]);

            maxEXP = max(EXP + pq.top() * k,maxEXP);

        }

        cout << maxEXP << endl;
        
    }

    return 0;
}