# include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
bool isValid(vector<int> v,int k) {
 
    int Sum = accumulate(v.begin(),v.end(),0);
 
    if (Sum % (v.size() - k) != 0) return false;
 
    int x = Sum / (v.size() - k);
 
    int currentSum = 0;
 
    for (int i = 0;i < v.size();i++) {
 
        currentSum += v[i];
 
        if (currentSum == x) currentSum = 0;
        
        if (currentSum > x) return false;
 
    }
 
    return currentSum == 0;
}
 
int minOperations(vector<int> &v) {
 
    for (int k = 0;k < v.size();k++)
        if (isValid(v,k)) return k;
 
    return -1;
}
 
int main() {
 
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
 
        int n;
        cin >> n;
 
        vector<int> v(n);
 
        for (auto &i : v) cin >> i;
 
        cout << minOperations(v) << endl;
 
    }
 
    return 0;
}