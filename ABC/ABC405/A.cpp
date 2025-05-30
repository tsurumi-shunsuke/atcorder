#include <iostream>
using namespace std;

int main () {
    int R, X;
    cin >> R >> X;

    if (R < 1 || 4300 < R) {
        cout << "input error!" << endl;
        return 0;
    }
    
    if (X == 1) {
        if (1600 <= R && R <= 2999) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    } else if (X == 2) {
        if (1200 <= R && R <= 2399) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    } else {
        cout << "input error!" << endl;
    }

    return 0;
}