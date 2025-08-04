#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main() {
    int N, A, B;
    cin >> N >> A >> B;
    string S;
    cin >> S;

    for (int i = A; i < N - B; i++) {
        cout << S[i];
    }
    cout << endl;

    return 0;
}