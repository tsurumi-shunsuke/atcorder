#include <iostream>
using namespace std;

int main () {
    int A, B;
    cin >> A >> B;

    if (A < 1 || 407 < A || B < 1 || 407 < B ) {
        cout << "input error" << endl;
    }

    double result;
    result = static_cast<double> (A) / B;
    
    int answer;

    if (result - (A / B) < 0.5) {
        answer = A / B;
    } else {
        answer = (A / B) + 1;
    }
    
    cout << answer << endl;
    return 0;
}