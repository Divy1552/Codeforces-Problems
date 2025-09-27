# include <bits/stdc++.h>

using namespace std;

int main() {

    unordered_map<char,int> m;

    int n;
    cin >> n;

    string str;
    cin >> str;

    int count = 0;

    for (int i = 0;i < str.length();i++) {

        if (i % 2 == 0)
            m[str[i]]++;
        else {

            if (m[str[i] + 32] == 0)
                count++;
            else
                m[str[i] + 32]--;

        }

    }

    cout << count << endl;
 
    return 0;
}