#include <iostream>
#include <vector>
using namespace std;



int main() {
    int n;
    cin >> n;

    int count = 0;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        if (a < b) {
            count++;
        } 
    }

    cout << count << endl;

    return 0;
}