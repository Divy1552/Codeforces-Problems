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

        vector<int> p(n);

        for (auto &i : p) cin >> i;

        string s;

        int i = 0,j = n-1,k = 1;

        while (i <= j) {

            if (k & 1) {

                if (p[i] > p[j]) {
                    s.push_back('L'); i++; k++;
                } else {
                    s.push_back('R'); j--; k++;
                }

            } else {

                if (p[i] > p[j]) {
                    s.push_back('R'); j--; k++;
                } else {
                    s.push_back('L'); i++; k++;
                }

            }

        }

        cout << s << endl;

    }

    return 0;
}