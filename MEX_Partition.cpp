# include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int MEX(vector<int> &a) {

    set<int> s;

    for (auto &i : a) s.insert(i);

    for (int i = 0;i <= 101;i++)
        if (!s.count(i)) return i;

}

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

        cout << MEX(a) << endl;

    }

    return 0;
}