# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {

        int n,m,a,b;
        cin >> n >> m >> a >> b;

        vector<pair<int,int>> Cuts;

        Cuts.push_back({min(a,n-a+1),m});
        Cuts.push_back({n,min(b,m-b+1)});

        int result = n + m;

        for (auto &i : Cuts) {

            int count = 1;

            while (i.first != 1) {
        		i.first = (i.first+1)/2;
                count++;
            }

            while (i.second != 1) {
                i.second = (i.second+1)/2;
                count++;
            }
            
            result = min(count,result);

        }

        cout << result << endl;

    }

    return 0;
}