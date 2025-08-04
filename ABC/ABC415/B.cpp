#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main() {
    string S;
    cin >> S;

    bool even = false;
    int num1, num2;

    for (int i = 0; i < S.length(); i++) {
        if (S[i] == '#') {
            if (even) {
                num2 = i + 1;
                cout << num1 << "," << num2 << endl;
                even = false;
            } else {
                num1 = i + 1;
                even = true;
            }
        }
    }

    return 0;
}