# include <iostream>

using namespace std;

int main() {
    
    int t;
    cin >> t;

    int n[100];

    string liar[100];

    for (int i = 0;i < 100;i++)
        liar[i] = "";

    for (int i = 0;i < t;i++) {

        cin >> n[i];

        int report[100];

        for (int j = 0;j < n[i];j++)
            cin >> report[j];

        int Sum = 0;

        for (int j = 0;j < n[i] - 1;j++) {

            if (report[j] == 0 && report[j+1] == 0) {
                liar[i] += "YES";
                break;
            }

        }
        
        for (int j = 0;j < n[i];j++) {
            if (report[j] == 1) {
                Sum += 1;
            }
        }

        if (Sum > n[i] - 1)
            liar[i] += "YES";
        
        if (liar[i] == "")
            liar[i] += "NO";

    }

    for (int i = 0;i < t;i++)
        cout << liar[i] << endl;

    return 0;
}