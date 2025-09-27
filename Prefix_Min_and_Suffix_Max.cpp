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

        string s;

        vector<int> left(n),right(n);

        left[0] = a[0]; right[n-1] = a[n-1];

        for (int i = 1;i < n;i++)
            left[i] = min(left[i-1],a[i]);

        for (int i = n-2;i >= 0;i--)
            right[i] = max(right[i+1],a[i]);

        for (int i = 0;i < n;i++) {

            if (left[i] == a[i] || right[i] == a[i])
                s.push_back('1');
            else
                s.push_back('0');

        }

        cout << s << endl;

    }

    return 0;
}