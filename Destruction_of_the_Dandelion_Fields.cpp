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

        vector<int> a(n);

        for (auto &i : a) cin >> i;

        vector<int> Odd,Even;

        for (auto &i : a) {

            if (i & 1)
                Odd.push_back(i);
            else
                Even.push_back(i);

        }

        int oddCount = Odd.size();

        if (!oddCount) {
            cout << 0 << endl;
            continue;
        }

        ll Count = 0;

        for (auto &i : Even) Count += i;

        sort(Odd.begin(),Odd.end());

        if (oddCount & 1)
            for (int i = oddCount-1;i >= (oddCount-1)/2;i--) Count += Odd[i];
        else
            for (int i = oddCount-1;i >= (oddCount)/2;i--) Count += Odd[i];

        cout << Count << endl;

    }

    return 0;
}