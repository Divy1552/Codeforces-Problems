# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int T;
    cin >> T;

    for (int t = 1;t <= T;t++) {

        string s;
        cin >> s;

        vector<int> freq(26);

        for (auto &i : s) freq[i-'A']++;

        while (freq[19]) {
            cout << "T";
            freq[19]--;
        }

        for (int i = 0;i < 26;i++) {
            if (i != 19) {

                while (freq[i]) {
                    cout << (char) ('A'+i);
                    freq[i]--;
                }

            }
        }

        cout << endl;

    }

    return 0;
}