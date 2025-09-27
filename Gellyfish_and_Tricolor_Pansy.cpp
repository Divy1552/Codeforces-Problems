# include <bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {

        int a,b,c,d;
        cin >> a >> b >> c >> d;

        if (a < b && c < d) {
            cout << "Flower" << endl;
            continue;
        } else if (a > b && c > d) {
            cout << "Gellyfish" << endl;
            continue;

        } else {

            if (a <= c && b <= d && a < b) {
                cout << "Flower" << endl;
                continue;
            } else if (a <= c && b <= d && a >= b) {
                cout << "Gellyfish" << endl;
                continue;
            } else if (a >= c && b >= d && c < d) {
                cout << "Flower" << endl;
                continue;
            } else if (a >= c && b >= d && c >= d) {
                cout << "Gellyfish" << endl;
                continue;
            } else if (a <= c && b >= d && a < d) {
                cout << "Flower" << endl;
                continue;
            } else if (a <= c && b >= d && a >= d) {
                cout << "Gellyfish" << endl;
                continue;
            } else if (a >= c && b <= d && c < b) {
                cout << "Flower" << endl;
                continue;
            } else if (a >= c && b <= d && c >= b) {
                cout << "Gellyfish" << endl;
                continue;
            }

        }

    }

    return 0;
}