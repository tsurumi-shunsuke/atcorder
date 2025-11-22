#include <iostream>
#include <vector>
#include <string>
using namespace std;



int main() {
    int X, Y, Z;
    cin >> X >> Y >> Z;

    int i = 0;
    while (X + i >= (Y + i) * Z) {
        if (X + i == (Y + i) * Z) {
           cout << "Yes" << endl; 
           return 0;
        }
        i++;
    }

    cout << "No" << endl;
    
    return 0;
}