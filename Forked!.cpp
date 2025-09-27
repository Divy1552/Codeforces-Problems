# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;
 
int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {

        int a,b;
        cin >> a >> b;

        int x1,y1;
        cin >> x1 >> y1;

        int x2,y2;
        cin >> x2 >> y2;

        vector<pair<int,int>> k,q;

        k.push_back({x1+a,y1+b});
        k.push_back({x1+a,y1-b});
        k.push_back({x1-a,y1+b});
        k.push_back({x1-a,y1-b});

        q.push_back({x2+a,y2+b});
        q.push_back({x2+a,y2-b});
        q.push_back({x2-a,y2+b});
        q.push_back({x2-a,y2-b});

        if (a != b) {

            k.push_back({x1+b,y1+a});
            k.push_back({x1+b,y1-a});
            k.push_back({x1-b,y1+a});
            k.push_back({x1-b,y1-a});

            q.push_back({x2+b,y2+a});
            q.push_back({x2+b,y2-a});
            q.push_back({x2-b,y2+a});
            q.push_back({x2-b,y2-a});

        }

        int count = 0;

        for (int i = 0;i < k.size();i++) {
            for (int j = 0;j < q.size();j++) {
                if (k[i] == q[j]) count++;
            }
        }

        cout << count << endl;

    }

    return 0;
}