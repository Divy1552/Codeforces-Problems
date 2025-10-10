# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    
    int T;
    cin >> T;

    for (int t = 1;t <= T;t++) {

        int n;
        cin >> n;

        int Count = 0,Win = n,Lose = 0;

        while (Win >= 2 || Lose >= 2) {

            int Matches1 = Win/2;

            Win -= Matches1;

            Count += Matches1;

            int Matches2 = Lose/2;

            Lose -= Matches2;

            Count += Matches2;

            Lose += Matches1;

        }

        cout << Count + 1 << endl;

    }

    return 0;
}