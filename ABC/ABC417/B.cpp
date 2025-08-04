#include <iostream>
#include <vector>
#include <string>
using namespace std;



int main() {
    int N, M;
    cin >> N >> M;
    vector<long long> A(N);
    for (auto &a : A) cin >> a;

    for (int i = 0; i < M; i++) {
        int b;
        cin >> b;
        for (int j = 0; j < N; j++) {
            if (A[j] > b) {
                break;
            } else if (A[j] == b) {
                A.erase(A.begin() + j);
                N--;
                break;
            }
        }
    }

    for (auto a : A) cout << a << " ";
    cout << endl;

    return 0;
}