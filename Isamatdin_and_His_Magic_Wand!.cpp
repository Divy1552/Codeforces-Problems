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

        int oddCount = 0,evenCount = 0;

        for (auto &i : a) {

            if (i & 1)
                oddCount++;
            else
                evenCount++;

        }

        bool flag = oddCount && evenCount;

        if (flag) sort(a.begin(),a.end());

        for (auto &i : a)
            cout << i << " ";
        cout << endl;

    }

    return 0;
}