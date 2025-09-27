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

        string s;
        cin >> s;

        bool flag = true;

        if (s.substr(0,2) == "01") flag = false;
        if (s.substr(n-2,2) == "10") flag = false;
        if (s.find("101") != -1) flag = false;

        if (!flag) {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;

        vector<int> oneIdx;

        for (int i = 0;i < n;i++)
            if (s[i] == '1') oneIdx.push_back(i);

        if (oneIdx.empty()) {

            for (int i = 0;i < n;i++) cout << n - i << " ";

            cout << endl; continue;

        }

        for (int i = oneIdx[0];i > 0;i--) cout << i << " ";

        cout << oneIdx[0] + 1 << " ";

        for (int i = 1;i < oneIdx.size();i++) {

            for (int j = oneIdx[i];j > oneIdx[i-1]+1;j--) cout << j << " ";

            cout << oneIdx[i] + 1 << " ";

        }

        for (int i = n;i > oneIdx[oneIdx.size()-1]+1;i--) cout << i << " ";

        cout << endl;

    }

    return 0;
}