# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

void solve() {

    ll n,rK,cK,rD,cD;
    cin >> n >> rK >> cK >> rD >> cD;

    ll Count1 = 0,Count2 = 0;

    if (rK < rD)
        Count1 = rD;
    else if (rK > rD)
        Count1 = n-rD;
    else
        Count1 = 0;

    if (cK < cD)
        Count2 = cD;
    else if (cK > cD)
        Count2 = n-cD;
    else
        Count2 = 0;

    ll result = max(Count1,Count2);
    
    cout << result << endl;

}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    
    int t;
    cin >> t;

    while (t--) solve();

    return 0;
}