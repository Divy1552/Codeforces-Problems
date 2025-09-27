# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

int computeMSB(int x) {

    for (int i = 31;i >= 0;i--)
        if ((x >> i) & 1) return i;

    return -1;
}

int g(int x,int i) {return (x >> i) & 1;}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    
    int T;
    cin >> T;

    for (int t = 1;t <= T;t++) {

        int L,R;
        cin >> L >> R;
        
        vector<int> a(R-L+1);

        for (int i = L;i <= R;i++) a[i-L] = i;

        int l = L,r = R;

        while (l < r) {

            int MSB = computeMSB(r),x = l,k = l;

            for (int i = MSB;i >= 0;i--) {
                if (g(l,i) != g(r,i)) {
                    x = i; break;
                }
            }

            for (int i = l;i <= r;i++) {
                if (g(i,x) != g(l,x)) {
                    k = i; break;
                }
            }

            int left = k-l,right = r-k+1;

            if (left <= right) {
                reverse(a.begin()+l-L,a.begin()+2*k-l-L); l = 2*k-l;
            } else {
                reverse(a.begin()+2*k-1-r-L,a.begin()+r-L+1); r = 2*k-2-r;
            }

        }

        ll result = 0;

        for (int i = L;i <= R;i++) result += a[i-L] | i;

        cout << result << endl;

        for (auto &i : a)
            cout << i << " ";
        cout << endl;

    }

    return 0;
}