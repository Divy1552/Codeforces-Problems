# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n;
    cin >> n;

    vector<int> Color(n+2,1);

    for (int i = 2;i * i <= n+1;i++) {
        if (Color[i] == 1) {
            for (int j = i*i;j <= n+1;j += i) {
                Color[j] = 2;
            }
        }
    }

    if (n > 2)
        cout << 2 << endl;
    else
        cout << 1 << endl;

    for (int i = 2;i <= n+1;i++)
        cout << Color[i] << " ";
    cout << endl;

    return 0;
}