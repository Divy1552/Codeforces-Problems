# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

int main() {
    
    int T;
    cin >> T;

    for (int t = 1;t <= T;t++) {

        int n;
        cin >> n;

        int a[n][n],k = (n-1)/2;
        
        int b = 0; a[k][k] = b++;

        int i = 0,j = 1;

        for (int l = 1;l < n;l++) {
        
            if (l & 1) {

                for (int c = i;c < j;c++) a[k+c][k+(l+1)/2] = b++;

                for (int r = i;r < j;r++) a[k+(l+1)/2][k+r] = b++;

                a[k+(l+1)/2][k+(l+1)/2] = b++; i--;

            } else {

                for (int r = j;r > i;r--) a[k-l/2][k+r] = b++;
                
                for (int c = j;c > i;c--) a[k+c][k-l/2] = b++;

                a[k-l/2][k-l/2] = b++; j++;

            }

        }

        for (int i = 0;i < n;i++) {
            for (int j = 0;j < n;j++)
                cout << a[i][j] << " ";
            cout << endl;
        }

    }

    return 0;
}