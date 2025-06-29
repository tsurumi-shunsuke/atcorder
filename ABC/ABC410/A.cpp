#include <iostream>
#include <vector>
using namespace std;



int main() {
    int n, k;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> k;

    int count = 0;
    for (int num : a) {
        if (num >= k) count++;
    }

    cout << count << endl;

    return 0;
}