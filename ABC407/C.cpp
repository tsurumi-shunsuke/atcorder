#include <iostream>
#include <string>
using namespace std;




int main () {
    string S;
    cin >> S;
    int answer = 0;

    for (int i = 0; i < S.size(); i++) {
        int A_button = 1;
        int B_button = 0;
        int num = S[i] - '0';

        if (i != S.size() - 1) {
            int next_num = S[i + 1] - '0';
            B_button = (num - next_num + 10) % 10;
        } else {
            B_button = num;
        }

        answer += (B_button + A_button);
    }

    cout << answer << endl;

    return 0;
}
