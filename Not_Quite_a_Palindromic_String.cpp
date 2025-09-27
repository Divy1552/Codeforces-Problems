# include <bits/stdc++.h>

using namespace std;

int main() {
    
    int t;
    cin >> t;

    while (t--) {

        int n,k;
        cin >> n >> k;
        cin.ignore();

        string s;
        getline(cin,s);

        if (k > n/2) {
            cout << "NO" << endl;
            continue;
        }

        int count = 0;

        for (int i = 0;i < n/2;i++)
            if (s[i] == s[n-1-i]) count++;

        if (count != k) {

            int count0 = 0,count1 = 0;

            for (int i = 0;i < n;i++) {
                if (s[i] == '0') count0++;
                else count1++;
            }

            int U = (n - 2 * k)/2;

            if (count0 >= U && count1 >= U && (count0 - U) % 2 == 0 && (count1 - U) % 2 == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;

        } else cout << "YES" << endl;

    }

    return 0;
}