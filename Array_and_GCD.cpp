# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

vector<int> storePrimes(int N) {

    vector<bool> isPrime(N+1,true);
    
    isPrime[0] = false; isPrime[1] = false;

    for (int i = 2;i <= sqrt(N);i++) {
        if (isPrime[i]) {
            for (int j = i*i;j <= N;j += i) {
                isPrime[j] = false;
            }
        }
    }

    vector<int> Primes;

    for (int i = 2;i <= N;i++)
        if (isPrime[i]) Primes.push_back(i);

    return Primes;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    
    int T;
    cin >> T;

    vector<int> Primes = storePrimes(10000000);

    vector<ll> primeSum(Primes.size()+1);

    for (int i = 1;i <= Primes.size();i++)
        primeSum[i] = primeSum[i-1] + Primes[i-1];

    for (int t = 1;t <= T;t++) {

        int n;
        cin >> n;

        vector<int> a(n);

        for (auto &i : a) cin >> i;

        sort(a.begin(),a.end()); int i = 0,Count = 0;

        ll Sum = accumulate(a.begin(),a.end(),0LL);

        while (Sum < primeSum[n-Count]) {Sum -= a[i++]; Count++;}

        cout << Count << endl;

    }

    return 0;
}