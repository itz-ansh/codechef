#include<iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T) {
        int count = 0;
        string arr[6] = {};

        for (int i = 0; i < 6; i++) {
            cin >> arr[i];
        }

        for (int i = 0; i < 6; i++) {
           // cout << arr[i] << " ";

            if (arr[i] == "W") {
                count++;
                if (count > 2) {
                    cout << "YES" << endl;
                    break; 
                }
            } else {
                count = 0;
            }
        }

        if (count <= 2) {
            cout << "NO" << endl;
        }

        T--;
    }

    return 0;
}
