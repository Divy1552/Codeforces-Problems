# include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int T;
    cin >> T;

    for (int t = 1;t <= T;t++) {

        int n,x;
        cin >> n >> x;

        string s;
        cin >> s;

        int closestLeft = -1,closestRight = n; x--;

        for (int i = 0;i < x;i++) if (s[i] == '#') closestLeft = i;

        for (int i = n-1;i > x;i--) if (s[i] == '#') closestRight = i;

        int leftDist = x,rightDist = n-(x+1),result;

        if (closestLeft != x-1 && closestRight != x+1) {

            int Min1 = min(rightDist,closestLeft+1) + 1;
            int Min2 = min(leftDist,n-closestRight) + 1;

            result = max(Min1,Min2);

        } else result = min(leftDist,rightDist) + 1;

        cout << result << endl;

    }

    return 0;
}