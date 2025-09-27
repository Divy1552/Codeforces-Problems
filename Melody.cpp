# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

bool isBeautiful(vector<pair<int,int>> &v) {

    if (v.size() < 2) return true; 

    for (int i = 0;i < v.size() - 1;i++) {

        if ((v[i].first == v[i+1].first && v[i].second == v[i+1].second)
        || (v[i].first != v[i+1].first && v[i].second != v[i+1].second))
            return false;

    }

    return true;
}

bool isNonBoring(vector<pair<int,int>> &v) {

    if (v.size() < 3) return true;

    for (int i = 0;i < v.size() - 2;i++) {

        if ((v[i].first == v[i+1].first && v[i+1].first == v[i+2].first)
        || (v[i].second == v[i+1].second && v[i+1].second == v[i+2].second))
            return false;

    }

    return true;
}

bool isMusic(vector<pair<int,int>> &v) {return isBeautiful(v) && isNonBoring(v);}

void generatePermutations(vector<vector<int>> &res,vector<int> &v,int idx) {

    if (idx == v.size()) {

        res.push_back(v);

        return;
    }

    for (int i = idx;i < v.size();i++) {

        swap(v[idx],v[i]);

        generatePermutations(res,v,idx+1);

        swap(v[idx],v[i]);

    }

}
 
int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        vector<pair<int,int>> sounds(n);

        for (auto &i : sounds) cin >> i.first >> i.second;

        vector<int> v(n);

        for (int i = 0;i < n;i++) v[i] = i+1; 
        
        vector<vector<int>> permutations;

        generatePermutations(permutations,v,0);

        map<int,pair<int,int>> m;

        for (int i = 1;i <= n;i++) m[i] = sounds[i-1];

        bool flag = false;

        for (auto &i : permutations) {

            vector<pair<int,int>> music;

            for (auto &j : i) music.push_back(m[j]);

            if (isMusic(music)) {

                flag = true;

                cout << "YES" << endl;

                for (auto &j : i)
                    cout << j << " ";
                cout << endl;

                break;

            }

        }

        if (flag == false) cout << "NO" << endl;

    }

    return 0;
}