#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A;

    int a;
    for (int i = 0; i < N; i++) {
        cin >> a;
        A.push_back(a);
    }

    int sum;
    for (int i = 0; i < N; i++) {
        sum = 0;
        for (int j = 0; j < N; j++) {
            if (i != j) sum += A[j];
        }
        if (sum == M) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;

    return 0;
}