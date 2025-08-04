#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, X;
    cin >> N;
    vector<int> A(N);
    for (auto& a : A) cin >> a;     //参照渡し 
    cin >> X;

    for (auto a : A) {
        if (a == X) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}