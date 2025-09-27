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

        int Count0 = 0,Count_1 = 0;

        for (int i = 0;i < n;i++) {

            int x;
            cin >> x;

            if (x == 0) Count0++;
            
            if (x == -1) Count_1++;

        }
        
        cout << Count0 + ((Count_1 & 1) ? 2 : 0) << endl;

    }

    return 0;
}