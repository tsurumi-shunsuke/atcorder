#include <iostream>
#include <vector>
using namespace std;


int main() {
    int N, S;
    cin >> N >> S;

    vector<int> T(N);
    for (int i = 0; i < N; i++) {
        cin >> T[i];
    }

    if (T[0] > S) {
        cout << "No" << endl;
        return 0;  
    }

    for (int i = 1; i < N; i++) {
        if (T[i] - T[i - 1] > S) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}