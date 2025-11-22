#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;



int main() {
    string S;
    cin >> S;
    vector<vector<int>> sv;

    int current, next;
    int count = 1;
    for (int i = 0; i < S.size(); i++) {
        current = S[i] - '0';
        if (i + 1 < S.size()) {
            next = S[i+1] - '0';
        } else {
            next = -1;
        }
        if (current == next) {
            count++;
        } else {
            sv.push_back({current, count});
            count = 1;
        }
    }

    int res = 0;
    for (int i = 0; i < sv.size() - 1; i++) {
        if (sv[i][0] == sv[i+1][0] - 1) {
            res += min(sv[i][1], sv[i+1][1]);
        }
    }

    cout << res << endl;
    
    return 0;
}