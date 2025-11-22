#include <iostream>
#include <vector>
#include <string>
using namespace std;



int main() {
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    if (C >= A) {
        if (D >= B) {
            cout << "No" << endl;
            return 0;
        } else {
            cout << "Yes" << endl;
        }
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}