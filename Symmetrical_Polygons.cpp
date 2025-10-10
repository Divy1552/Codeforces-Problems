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

        vector<int> a(n),v;

        for (auto &i : a) cin >> i;

        map<int,int> freq;

        for (auto &i : a) freq[i]++;

        int Count = 0; ll Sum = 0;

        for (auto &x : freq) {

            Count += 2 * (x.second/2);

            Sum += 2 * (x.second/2) * 1LL * x.first;

            if (x.second & 1) v.push_back(x.first);

        }

        ll result = Sum;
        
        if (v.size() >= 2) {
            for (int i = v.size()-2;i >= 0;i--) {
                if (Sum + v[i] > v[i+1]) {
                    result += v[i] + v[i+1];
                    Count += 2; break;
                }
            }
        }

        if (result == Sum && v.size() >= 1) {
            for (int i = v.size()-1;i >= 0;i--) {
                if (Sum > v[i]) {
                    result += v[i];
                    Count++; break;
                }
            }
        }

        cout << (Count >= 3 ? result : 0) << endl;

    }

    return 0;
}