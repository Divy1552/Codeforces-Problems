# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        vector<int> a(n);

        for (auto &i : a) cin >> i;

        int maxCount = 0;

        set<int> current,seen;

        for (int i = 0;i < n;i++) {

            current.insert(a[i]);
            seen.insert(a[i]);

            if (current.size() == seen.size()) {
                maxCount++;
                seen.clear();
            }

        }

        cout << maxCount << endl;

    }

    return 0;
}