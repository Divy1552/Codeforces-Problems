# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

bool cardGame(int n,vector<int> &A,vector<int> &B) {

    for (int i = 0;i < A.size();i++) {

        if (A[i] < n) {
            auto ub = upper_bound(B.begin(),B.end(),A[i]);
            if (A[i] != 1 ? ub == B.end() : *ub == n) return false;
        }

        if (A[i] == n && B[0] != 1) return false;

    }

    return true;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {

        int n; string s;
        cin >> n >> s;

        vector<int> A,B;

        for (int i = 0;i < n;i++) {

            if (s[i] == 'A')
                A.push_back(i+1);
            else
                B.push_back(i+1);
        
        }

        if (cardGame(n,A,B))
            cout << "Bob" << endl;
        else
            cout << "Alice" << endl;

    }

    return 0;
}