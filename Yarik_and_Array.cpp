# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

int maxSum(vector<int> &v) {

    int result = v[0],maxEnding = v[0];

    for (int i = 1;i < v.size();i++) {
        maxEnding = max(maxEnding + v[i],v[i]);
        result = max(maxEnding,result);
    }

    return result;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        vector<int> a(n);

        for (auto &i : a) cin >> i;

        vector<vector<int>> v;
        
        vector<int> temp;
        
        temp.push_back(a[0]);

        for (int i = 1;i < n;i++) {

            if (abs(a[i-1]) % 2 == abs(a[i]) % 2) {
                v.push_back(temp); temp.clear();
            }

            temp.push_back(a[i]);
        
        }

        v.push_back(temp); temp.clear();

        int result = INT_MIN;

        vector<int> Sum(v.size());

        for (int i = 0;i < v.size();i++)
            result = max(maxSum(v[i]),result);

        cout << result << endl;

    }

    return 0;
}