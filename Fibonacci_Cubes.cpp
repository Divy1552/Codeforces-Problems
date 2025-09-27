# include <bits/stdc++.h>

using namespace std;

int fibonacci(int n) {

    if (n == 1) return 1;
    if (n == 2) return 2;

    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {

    int t;
    cin >> t;

    while (t--) {

        string str;
        int n,m;
        cin >> n >> m;

        int a[n+1] = {0};

        for (int i = 1;i <= n;i++)
            a[i] = fibonacci(i);

        while (m--) {

            int l,w,h;
            cin >> l >> w >> h;

            int minDim = INT_MAX;

            if (l < minDim) minDim = l;
            if (w < minDim) minDim = w;
            if (h < minDim) minDim = h;

            int maxDim = INT_MIN;

            if (l > maxDim) maxDim = l;
            if (w > maxDim) maxDim = w;
            if (h > maxDim) maxDim = h;

            if (minDim >= a[n] && maxDim >= a[n] + a[n-1])
                str.push_back('1');
            else
                str.push_back('0');

        }

        cout << str << endl;

    }

    return 0;
}