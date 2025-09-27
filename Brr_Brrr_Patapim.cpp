# include <iostream>

using namespace std;

int main() {
    
    int t;
    cin >> t;

    int n[200] = {0};
    int p[200][1600] = {0};

    for (int i = 0;i < t;i++) {

        cin >> n[i];

        int G[800][800];

        for (int j = 0;j < n[i];j++) {
            for (int k = 0;k < n[i];k++) {
                cin >> G[j][k];
                p[i][j+k+1] = G[j][k];
            }
        }
        
        for (int j = 1;j <= 2 * n[i];j++) {
            for (int k = 1;k < 2* n[i];k++) {
                if (j == p[i][k])
                    break;
                if (k == 2*n[i]-1)
                    p[i][0] = j;
            }
        }

    }

    for (int i = 0;i < t;i++) {
        for (int j = 0;j < 2 * n[i];j++) {
            cout << p[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}