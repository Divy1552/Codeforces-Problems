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

        vector<int> a(n);

        for (auto &i : a) cin >> i;

        bool flag = false;

        for (int l = 1;l < n-1;l++) {

            for (int r = l+1;r < n;r++) {

                int s1 = 0,s2 = 0,s3 = 0;

                for (int i = 0;i < l;i++) s1 += a[i];

                for (int i = l;i < r;i++) s2 += a[i];

                for (int i = r;i < n;i++) s3 += a[i];

                s1 = s1 % 3; s2 = s2 % 3; s3 = s3 % 3;

                if (s1 == s2 && s2 == s3 && s3 == s1) flag = true;
    
                if (s1 != s2 && s2 != s3 && s3 != s1) flag = true;

                if (flag) {
                    cout << l << " " << r << endl;
                    break;
                }

            }

            if (flag) break;

        }

        if (!flag) cout << 0 << " " << 0 << endl;

    }

    return 0;
}