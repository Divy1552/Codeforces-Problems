# include <iostream>
# include <algorithm>

using namespace std;

int main() {
    
    int t;
    cin >> t;

    int n[1000];
    int output[1000];

    for (int i = 0;i < t;i++) {

        cin >> n[i];

        int a[50];

        for (int j = 0;j < n[i];j++)
            cin >> a[j];

        sort(a,a+n[i]);

        if ((a[0] + a[n[i] - 1]) % 2 != 0) {

            int right,left;
                
            if (a[0] % 2 == 0 && a[n[i] - 1] % 2 != 0) {

                for (int j = 0;j < n[i];j++) {
                    if (a[n[i] - 1 - j] % 2 == 0) {
                        right = j;
                        break;
                    }
                }

                for (int j = 0;j < n[i];j++) {
                    if (a[j] % 2 != 0) {
                        left = j;
                        break;
                    }
                }

                output[i] = min(right,left);

            } else {

                for (int j = 0;j < n[i];j++) {
                    if (a[n[i] - 1 - j] % 2 != 0) {
                        right = j;
                        break;
                    }
                }

                for (int j = 0;j < n[i];j++) {
                    if (a[j] % 2 == 0) {
                        left = j;
                        break;
                    }
                }

                output[i] = min(right,left);

            }

        } else output[i] = 0;

    }

    for (int i = 0;i < t;i++)
        cout << output[i] << endl;

    return 0;
}