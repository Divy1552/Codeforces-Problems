# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {

        int n,s;
        cin >> n >> s;

        vector<int> x(n);

        for (auto &i : x) cin >> i;

        int minCount = 0;

        if (s <= x[0])
            minCount = x[n-1] - s;
        else if (s >= x[n-1])
            minCount = s - x[0];
        else {

            int gap = x[n-1] - x[0];
            int left = s - x[0];
            int right = x[n-1] - s;

            if (left >= right)
                minCount = gap + right;
            else
                minCount = gap + left; 

        }

        cout << minCount << endl;
        
    }

    return 0;
}