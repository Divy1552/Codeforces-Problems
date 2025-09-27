# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int T;
    cin >> T;

    for (int t = 1;t <= T;t++) {

        int a,b,c,d;
        cin >> a >> b >> c >> d;

        bool flag = true;
    
        if (max(a,b) > 2*(min(a,b)+1)) flag = false;

        if (max(c-a,d-b) > 2*(min(c-a,d-b)+1)) flag = false;

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }

    return 0;
}