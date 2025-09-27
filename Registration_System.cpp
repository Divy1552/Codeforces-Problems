# include <bits/stdc++.h>

using namespace std;

int main() {

    unordered_map<string,int> m;

    int n;
    cin >> n;

    for (int i = 1;i <= n;i++) {

        string str;
        cin >> str;

        if (m[str] == 0) {
            cout << "OK" << endl;
            m[str]++;
            continue;
        }

        if (m[str] > 0) {
            m[str]++;
            str += to_string(m[str] - 1);
            cout << str << endl;
        }

    }
 
    return 0;
}