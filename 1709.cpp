# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        vector<int> a(n),b(n);

        for (auto &i : a) cin >> i;
        for (auto &i : b) cin >> i;

        int swapCount = 0;

        vector<pair<int,int>> Operations;

        for (int i = 0;i < n-1;i++) {
            for (int j = 0;j < n-i-1;j++) {

                if (a[j] > a[j+1]) {
                    swap(a[j],a[j+1]);
                    Operations.push_back({1,j+1});
                    swapCount++;
                }

                if (b[j] > b[j+1]) {
                    swap(b[j],b[j+1]);
                    Operations.push_back({2,j+1});
                    swapCount++;
                }
                
            }
        }

        for (int i = 0;i < n;i++) {

            if (a[i] > b[i]) {
                swap(a[i],b[i]);
                Operations.push_back({3,i+1});
                swapCount++;
            }

        }

        cout << swapCount << endl;

        for (auto &i : Operations)
            cout << i.first << " " << i.second << endl;

    }

    return 0;
}