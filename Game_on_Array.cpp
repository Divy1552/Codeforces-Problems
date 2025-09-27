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

        for (auto &i : a) if (i & 1) freq[i]++;

        ll evenSum = 0,Sum = 0;

        for (auto &i : a) {

            if (i & 1)
                evenSum += i-1;
            else
                evenSum += i;

            Sum += i;

        }

        ll A = evenSum/2;

        vector<int> f;

        for (auto &x : freq) f.push_back(x.second);

        sort(f.rbegin(),f.rend());

        for (int i = 0;i < f.size();i += 2) A += f[i];

        cout << A << " " << Sum - A << endl;

    }

    return 0;
}