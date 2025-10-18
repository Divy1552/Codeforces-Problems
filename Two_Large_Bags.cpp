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

        map<int,int> freq;

        for (auto &i : a) freq[i]++;

        bool flag = true;

        for (auto &x : freq) {
            if (x.second % 2 != 0) {
                flag = false;
                break;
            }
        }

        if (flag) {
            cout << "Yes" << endl;
            continue;
        }

        flag = true;

        for (auto it = freq.begin();it != prev(freq.end());it++) {

            int x = it->first;

            if (freq[x] < 3) {

                if (freq[x] % 2 != 0) {   
                    flag = false;
                    break;
                } else continue;
                
            }

            int y = x+1;

            freq[y] += freq[x]-2;
            freq[x] = 1;

        }

        int x = prev(freq.end())->first;

        if (flag && freq[x] % 2 == 0)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;

    }

    return 0;
}