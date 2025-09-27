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

        vector<int> a(n);

        for (auto &i : a) cin >> i;

        ll totalChances = accumulate(a.begin(),a.end(),0LL);
    
        int Min = *min_element(a.begin(),a.end());
        
        int Max = *max_element(a.begin(),a.end());
        
        priority_queue<int> pq;
        
        for (auto &i : a) pq.push(i);
        
        for (ll i = 1;i <= totalChances;i++) {
            
            pq.push(pq.top()-1);
            pq.pop();
            
            if (pq.top()-Min > k) {
                
                if (i & 1)
                    cout << "Jerry" << endl;
                else
                    cout << "Tom" << endl;
                
                break;
            }
            
            if (pq.top() < Max) {
                
                if (totalChances & 1)
                    cout << "Tom" << endl;
                else
                    cout << "Jerry" << endl;
                    
                break;
            }
            
        }

    }

    return 0;
}