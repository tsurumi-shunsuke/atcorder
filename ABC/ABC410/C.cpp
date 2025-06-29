#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<vector<int>> query(q, vector<int>(3));
    for (int i = 0; i < q; i++) {
        for (int j = 0; j < 3; j++) {
            if (j == 2 && query[i][0] != 1) {
                break;
            }
            cin >> query[i][j];
        }
    }

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        a[i] = i + 1;
    }

    int offset = 0;
    for (int i = 0; i < q; i++) {
        int type = query[i][0];
        switch (type)
        {
        case 1: {
            int index = (offset + (query[i][1] - 1)) % n;
            int new_num = query[i][2];
            a[index] = new_num;
            break;
        }
        case 2: {
            int index = (offset + (query[i][1] - 1)) % n;
            cout << a[index] << endl;
            break;
        }
        case 3: {
            int k = query[i][1];
            offset = (offset + (k % n)) % n;
            break;
        }        
        default:
            break;
        }
    }

    return 0;
}