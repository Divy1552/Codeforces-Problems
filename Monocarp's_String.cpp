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

        string s;
        cin >> s;

        int Count1 = 0,Count2 = 0;

        for (auto &c : s) {

            if (c == 'a')
                Count1++;
            else
                Count2++;

        }

        if (Count1 == Count2) {
            cout << 0 << endl;
            continue;
        }

        if (Count1 == 0 || Count2 == 0) {
            cout << -1 << endl;
            continue;
        }

        int delta = Count1 - Count2;

        unordered_map<int,int> lastPos;

        lastPos[0] = 0;
        
        int pref = 0,best = INT_MAX;

        for (int i = 0;i < n;i++) {

            pref += (s[i] == 'a') ? 1 : -1;

            int needPref = pref - delta;

            auto it = lastPos.find(needPref);

            if (it != lastPos.end()) best = min(best, (i + 1) - it->second);

            lastPos[pref] = i + 1;

        }

        if (best == n)
            cout << -1 << endl;
        else
            cout << best << endl;

    }

    return 0;
}