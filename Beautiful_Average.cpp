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

        int Max = INT_MIN;

        for (int i = 0;i < n;i++) {

            int x; cin >> x;

            Max = max(x,Max);
            
        }

        cout << Max << endl;

    }

    return 0;
}