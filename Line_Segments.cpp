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

        int px,py,qx,qy;
        cin >> px >> py >> qx >> qy;

        double d = sqrt(pow(qx-px,2) + pow(qy-py,2));

        vector<int> a(n);
        
        for (auto &i : a) cin >> i;

        int Sum = 0,Max = 0;

        for(int i = 0; i < n; i++) {
            Max = max(Max, a[i]);
            Sum += a[i];
        }

        bool isPossible = true;

        if (d > Sum) isPossible = false;

        if (d < 2*Max-Sum) isPossible = false;

        if(isPossible)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;

    }

    return 0;
}