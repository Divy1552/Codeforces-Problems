# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    
    int T;
    cin >> T;

    for (int t = 1;t <= T;t++) {

        int n,m;
        cin >> n >> m;

        map<int,set<int>> a;

        for (int i = 0;i < m;i++) {

            int x; cin >> x;

            a[x/100].insert(x);

        }

        for (int i = 1;i <= n/2;i++) {

            if (a.empty()) break;

            if (a.size() == 1) {

                for (int j = 0;j < 2;j++) {

                    auto Class = (a.begin()->second).begin();

                    for (int k = 0;k < 6;k++)
                        cout << *Class << " ";
                    cout << endl;

                    (a.begin()->second).erase(Class);

                    if ((a.begin()->second).empty()) a.erase(a.begin());

                    if (a.empty()) break;

                }

                continue;

            }

            auto Class1 = (a.begin()->second).begin();

            auto Class2 = (prev(a.end())->second).begin();

            for (int j = 0;j < 6;j++) {

                if (j & 1)
                    cout << *Class1 << " ";
                else
                    cout << *Class2 << " ";
    
            }

            cout << endl;

            for (int j = 0;j < 6;j++) {

                if (j & 1)
                    cout << *Class2 << " ";
                else
                    cout << *Class1 << " ";
    
            }

            cout << endl;

            (a.begin()->second).erase(Class1);

            if ((a.begin()->second).empty()) a.erase(a.begin());

            (prev(a.end())->second).erase(Class2);
            
            if ((prev(a.end())->second).empty()) a.erase(prev(a.end()));

        }

        if (n & 1) {

            if (a.empty()) break;

            if (a.size() == 1) {

                auto Class = (a.begin()->second).begin();

                for (int k = 0;k < 6;k++)
                    cout << *Class << " ";
                cout << endl;

                (a.begin()->second).erase(Class);

                if ((a.begin()->second).empty()) a.erase(a.begin());

                continue;

            }

            auto Class1 = (a.begin()->second).begin();

            auto Class2 = (prev(a.end())->second).begin();

            for (int i = 0;i < 6;i++) {

                if (i & 1)
                    cout << *Class1 << " ";
                else
                    cout << *Class2 << " ";
    
            }

            cout << endl;

            (a.begin()->second).erase(Class1);

            if ((a.begin()->second).empty()) a.erase(a.begin());

            (prev(a.end())->second).erase(Class2);
            
            if ((prev(a.end())->second).empty()) a.erase(prev(a.end()));

        }
    
    }

    return 0;
}