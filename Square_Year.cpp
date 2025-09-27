# include <bits/stdc++.h>

using namespace std;

int main() {
    
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {

        string s;
        getline(cin,s);

        int year = stoi(s);

        if ((sqrt(year) - (int) sqrt(year)) == 0) {
            cout << 0 << " " << sqrt(year) << endl;
        } else cout << -1 << endl;

    }

    return 0;
}