# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;
 
int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<int> b;

    for (int i = 0;i < s.length();i++)
        if (s[i] == 'b') b.push_back(i);
        
    int result = 0,idx = b.size();

    if (idx > 0) {

        string str = s.substr(0,b[0]);

        if (str.find('a') != -1) result += b[0];

        for (int i = 0;i < idx - 1;i++) {

            int length = b[i+1] - b[i] - 1;

            str = s.substr(b[i]+1,length);

            if (str.find('a') != -1) result += length;
    
        }

        int length = s.length() - b[idx-1] - 1;

        str = s.substr(b[idx-1] + 1,length);

        if (str.find('a') != -1) result += length;

    } else if (s.find('a') != -1) result += s.length();

    cout << result << endl;

    return 0;
}