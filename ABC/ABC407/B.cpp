#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

int main () {
    int X, Y;
    cin >> X >> Y;

    if (X < 2 || 13 < X || Y < 0 || 6 < Y) {
        cout << "input error!" << endl;
        return 0;
    }

    vector<pair<int, int>> vp;

    for (int i = 1; i < 7; i++) {
        for (int j = 1; j < 7; j++) {
            if (i + j >= X) {
                vp.push_back({i, j});
            }
        }
    }

    for (int i = 1; i < 7; i++) {
        for (int j = 1; j < 7; j++) {
            if (i - j >= Y || j - i >= Y) {
                if (find(vp.begin(), vp.end(), make_pair(i, j)) == vp.end()) {
                    vp.push_back({i, j});
                }
                if (find(vp.begin(), vp.end(), make_pair(j, i)) == vp.end()) {
                    vp.push_back({j, i});
                }
            }
        }
    }

    long double p;
    int num = vp.size();
    p = static_cast<long double> (num) / 36;

    cout << fixed << setprecision(30) << p << endl;

    return 0;

}