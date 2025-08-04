#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;


void test() {
    int N;
    cin >> N;
    string S;
    cin >> S;

    vector<int> danger_numbers;
    for (int i = 0; i < S.length(); i++) {
        if (S[i] == '1') danger_numbers.push_back(i + 1);
    }

    int max_danger_number = danger_numbers[danger_numbers.size() - 1];
    int state = 0;
    int loop = N;
    vector<int> n_flg(N);
    for (auto& flg : n_flg) flg = 1;
    while(loop--) {
        int n = N;
        while (n--) {
            if (n_flg[n - 1] == 1 || S[state + pow(2, n - 1) + 1] == '0' ) {
                state = state + pow(2, n - 1);
                n_flg[n - 1] = 0;
                break;
            }
        }
        if (state > max_danger_number) {
            cout << "Yes" << endl;
            return;
        }
    }
    cout << "No" << endl;
}




int main() {
    int T;
    cin >> T;

    while(T--) test();

    return 0;
}