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

        set<int> s;

        for (int i = 0;i < n;i++) {

            int x;
            cin >> x;

            s.insert(x);

        }

        cout << 2*s.size()-1 << endl;

    }

    return 0;
}