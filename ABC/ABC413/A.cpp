#include <iostream>
#include <vector>
using namespace std;



int main() {
    int n, m;
    cin >> n >> m;
    
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int a = 0;
        cin >> a;
        sum += a;
    }

    if (sum <= m) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}