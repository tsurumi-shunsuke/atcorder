#include <iostream>
#include <vector>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int ans = 0;
    for (int x = 0; x <= n; x++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (x <= a[j]) count++; 
        }
        
        if (count >= x) {
            ans = x;
        }
    }

    cout << ans << endl;
    return 0;
}