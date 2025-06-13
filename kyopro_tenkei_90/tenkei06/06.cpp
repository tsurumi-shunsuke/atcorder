#include <string>
#include <iostream>
#include <vector>
using namespace std;

int main () {
    int N , K;
    string S;
    cin >> N >> K >> S;

    vector<char> ans;
    int head = 0;

    for (int i = 0; i < K; i++) {
        int min_pos = head;
        for (int j = head; j <= N - (K - i); j++) {
            if (S[min_pos] > S[j]) {
                min_pos = j;
            }
        }
        ans.push_back(S[min_pos]);
        head = min_pos + 1;
    }
    
    for (char c : ans) cout << c;
    cout << endl;

    return 0;
}