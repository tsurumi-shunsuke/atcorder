#include <iostream>
#include <vector>
#include <cmath>
using namespace std;



int main () {
    int n, q;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> q;
    vector<int> b(q);
    for (int i = 0; i < q; i++) {
        cin >> b[i];
    }

    int ans;
    for (int i = 0; i < q; i++) {
        int b_num = b[i];
        ans = abs(b_num - a[0]);
        for (int j = 0; j < n; j++) {
            int a_num = a[j];
            int new_num = abs(b_num - a_num);
            if (ans > new_num) ans = new_num;
        }
        cout << ans << endl;
    }


    return 0;
}