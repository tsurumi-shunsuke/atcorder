#include <iostream>
#include <vector>
using namespace std;



int main() {
    int n, q;
    cin >> n >> q;
    vector<int> x(q);
    for (int i = 0; i < q; i++) {
        cin >> x[i];
    }

    vector<int> ans(q);
    vector<int> box(n);
    for (int i = 0; i < q; i++) {
        if (x[i] > 0) {
            ans[i] = x[i];
            box[x[i] - 1]++;
        } else {
            int min_index = 0;
            for (int j = 1; j < n; j++) {
                if (box[j] < box[min_index]) {
                    min_index = j;
                }
            }
            ans[i] = min_index + 1;
            box[min_index]++;
        }
    }

    for (int num : ans) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}