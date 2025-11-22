#include <iostream>
#include <vector>
#include <string>
using namespace std;



int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int res;
    for (int i = 0; i < N; i++) {
        res = -1;
        for (int j = i; j >= 0; j--) {
            if (A[i] < A[j]) {
                res = j + 1;
                break;
            }
        }
        cout << res << endl;
    }
    
    return 0;
}