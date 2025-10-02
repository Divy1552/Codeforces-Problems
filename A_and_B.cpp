# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

ll Cost(vector<int> &a) {

    int n = a.size(); ll Count = 0;

    for (int i = 0;i < n;i++)
        Count += abs((a[i]-i) - (a[n/2]-n/2));

    return Count;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    
    int T;
    cin >> T;

    for (int t = 1;t <= T;t++) {

        int n;
        cin >> n;

        string s;
        cin >> s;

        vector<int> a,b;

        for (int i = 0;i < n;i++) {

            if (s[i] == 'a') a.push_back(i);

            if (s[i] == 'b') b.push_back(i);

        }

        cout << min(Cost(a),Cost(b)) << endl;

    }

    return 0;
}