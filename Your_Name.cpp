# include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int T;
    cin >> T;

    for (int t = 1;t <= T;t++) {

        int n; string s1,s2;
        cin >> n >> s1 >> s2;

        vector<int> freq1(26),freq2(26);

        for (auto &c : s1) freq1[c-'a']++;

        for (auto &c : s2) freq2[c-'a']++;

        bool flag = true;

        for (int i = 0;i < 26;i++) {
            if (freq1[i] != freq2[i]) {
                flag = false; break;
            }
        }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }

    return 0;
}