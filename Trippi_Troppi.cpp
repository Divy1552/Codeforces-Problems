# include <iostream>
# include <string>

using namespace std;

int main() {
    
    int t;
    cin >> t;
    cin.ignore();

    string s[100];
    string str[100];

    for (int i = 0;i < t;i++) {

        getline(cin,s[i]);

        int spaces_idx[2];
        int count = 0;

        for (int j = 0;j < s[i].length();j++) {
            if (s[i][j] == ' ') {
                spaces_idx[count++] = j;
            }
        }

        str[i] += s[i][0];
        str[i] += s[i][spaces_idx[0] + 1];
        str[i] += s[i][spaces_idx[1] + 1];
    
    }

    for (int i = 0;i < t;i++)
        cout << str[i] << endl;

    return 0;
}