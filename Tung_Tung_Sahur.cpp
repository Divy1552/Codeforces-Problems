# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    
    int T;
    cin >> T;

    for (int t = 1;t <= T;t++) {

        string p,s;
        cin >> p >> s;

        bool flag = true; int i = 0,j = 0;

        while (i < p.size() && j < s.size()) {

            int L1 = 0,R1 = 0,L2 = 0,R2 = 0;

            if (p[i] != s[j]) flag = false;

            if (p[i] == 'L') {

                while (p[i] == 'L') {L1++; i++;}

                while (s[j] == 'L') {L2++; j++;}

                if (L2 < L1 || L2 > 2*L1) flag = false;

            } else {

                while (p[i] == 'R') {R1++; i++;}

                while (s[j] == 'R') {R2++; j++;}

                if (R2 < R1 || R2 > 2*R1) flag = false;
                
            }

            if (!flag) break;

        }

        if (i != p.size() || j != s.size()) flag = false;

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }

    return 0;
}