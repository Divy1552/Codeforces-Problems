# include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int T;
    cin >> T;

    for (int t = 1;t <= T;t++) {

        int n,k; string s;
        cin >> n >> k >> s;

        vector<int> Ones;

        for (int i = 0;i < n;i++)
            if (s[i] == '1') Ones.push_back(i);

        if (Ones.size() <= 1) {
            cout << Ones.size() << endl;
            continue;
        }

        int Count = 1;

        for (int i = 1;i < Ones.size();i++)
            if (Ones[i]-Ones[i-1] >= k) Count++;

        cout << Count << endl;

    }

    return 0;
}