# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;
 
int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n;
    cin >> n;

    vector<int> v(n+1);

    for (int i = 0;i < n;i++) cin >> v[i];

    int count = 0;

    set<ll> s;

    ll sum = 0;

    s.insert(0);

    for (int i = 0;i < n;i++) {

        sum += v[i];

        if (s.find(sum) != s.end()) {
            count++;
            s.clear();
            s.insert(0);
            sum = v[i];
        }

        s.insert(sum);

    }

    cout << count << endl;
 
    return 0;
}