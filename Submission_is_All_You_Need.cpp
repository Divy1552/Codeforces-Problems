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

        multiset<int> s;

        int Count0 = 0,Count1 = 0,Sum = 0;
 
        for (int i = 0;i < n;i++) {

            int temp; cin >> temp;

            if (temp == 0) Count0++;
            if (temp == 1) Count1++;

            Sum += temp;

            s.insert(temp);

        }

        if (Count0 <= Count1)
            cout << Sum + min(Count0,Count1) << endl;
        else
            cout << Sum + Count0 << endl;

    }

    return 0;
}