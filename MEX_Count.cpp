# include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int MEX(vector<int> &a) {

    int n = a.size(); set<int> s;

    for (auto &i : a) s.insert(i);

    for (int i = 0;i <= n;i++)
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

        int M = MEX(a); vector<int> freq(M);

        for (int i = 0;i < n;i++)
            if (a[i] < M) freq[a[i]]++;

        map<int,int> m;

        for (int i = 0;i < M;i++) m[freq[i]]++;

        vector<int> k(n+1,1);

        for (int i = 1;i <= n;i++) {

            if (i <= n-M)
                k[i] = k[i-1] + m[i];
            else
                k[i] = n-i+1;

        }

        for (auto &i : k)
            cout << i << " ";
        cout << endl;

    }

    return 0;
}