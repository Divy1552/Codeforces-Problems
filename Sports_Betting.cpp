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

        sort(a.begin(),a.end());

        if (n < 4) {
            cout << "No" << endl;
            continue;
        }

        vector<int> b(1,0);

        for (int i = 1;i < n;i++)
            if (a[i] > a[i-1]+1) b.push_back(i);

        bool result = false;

        for (int i = 0;i < b.size();i++) {

            int l = b[i],r = (i < b.size()-1) ? b[i+1]-1 : n-1;

            while (r-l > 3 && a[l] != a[l+1]) l++;

            while (r-l > 3 && a[r] != a[r-1]) r--;

            if (r-l < 3 || a[l] != a[l+1] || a[r] != a[r-1]) continue;

            result = true; break;

        }

        if (result)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;

    }

    return 0;
}