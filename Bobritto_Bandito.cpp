# include <iostream>

using namespace std;

int main() {
    
    int t;
    cin >> t;

    int l[100],r[100],m[100],n[100];
    int _l[100],_r[100];

    for (int i = 0;i < t;i++) {

        cin >> n[i] >> m[i] >> l[i] >> r[i];

        for (int j = l[i];j <= r[i];j++) {
            for (int k = l[i];k <= r[i];k++) {
                if (k - j == m[i] && j <= 0 && k >= 0) {
                    _l[i] = j;
                    _r[i] = k;
                }
            }
        }

    }

    for (int i = 0;i < t;i++)
        cout << _l[i] << " " << _r[i] << endl;

    return 0;
}