# include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int N = 200005;

vector<int> SPF(N),visited;

vector<int> primeCount(N,0);

void Sieve() {

    for (int i = 0;i < N;i++) SPF[i] = i;

    for (int i = 2;i * 1LL * i < N;i++) {
        if (SPF[i] == i) {
            for (ll j = i * 1LL * i;j < N;j += i) {
                if (SPF[j] == j) SPF[j] = i;
            }
        }
    }

}

void distinctPrimes(int x,set<int> &f) {

    while (x > 1) {

        int p = SPF[x]; f.insert(p);

        while (x > 1 && x % p == 0) x /= p;

    }

}

void reset() {

    for (int p : visited) primeCount[p] = 0;

    visited.clear();

}

int Check0(vector<int> &a) {

    for (int x : a) {

        set<int> f;

        distinctPrimes(x,f);

        for (int p : f) {

            if (primeCount[p] == 0)
                visited.push_back(p);

            primeCount[p]++;

            if (primeCount[p] >= 2) return 0;

        }

    }

    return -1;
}

int Check1(vector<int> &a) {

    set<int> s(visited.begin(),visited.end());

    for (int x : a) {

        set<int> f;

        distinctPrimes(x+1,f);

        for (int p : f) if (s.count(p)) return 1;
    }

    return -1;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int T;
    cin >> T;

    Sieve();

    for (int t = 1;t <= T;t++) {

        int n;
        cin >> n;

        vector<int> a(n),b(n);

        for (auto &i : a) cin >> i;

        for (auto &i : b) cin >> i;

        reset();

        if (Check0(a) == 0)
            cout << 0 << endl;
        else if (Check1(a) == 1)
            cout << 1 << endl;
        else
            cout << 2 << endl;

    }

    return 0;
}