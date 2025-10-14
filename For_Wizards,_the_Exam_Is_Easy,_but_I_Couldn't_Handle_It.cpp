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

        int l = 1,r = n,result = 0;

        for (int i = 0;i < n;i++) {

            int Count1 = 0,Count2 = 0;

            for (int j = i+1;j < n;j++) {
                if (a[j] < a[i]) Count1++;
                if (a[j] > a[i]) Count2++;
            }

            for (int j = n-1;j >= i;j--) {

                if (Count1-Count2 >= result) {
                    result = Count1-Count2;
                    l = i+1; r = j+1;
                }

                if (a[j] < a[i]) Count1--;
                if (a[j] > a[i]) Count2--;

            }

        }

        cout << l << " " << r << endl;

    }

    return 0;
}