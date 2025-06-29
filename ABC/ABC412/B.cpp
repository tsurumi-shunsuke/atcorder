#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;



int main() {
    string s, t;
    cin >> s >> t;

    char c;
    for (int i = 1; i < s.length(); i++) {
        if (isupper(s[i])) {
            c = s[i - 1];
        } else {
            continue;
        }
        bool precondition = false;
        for (int j = 0; j < t.length(); j++) {
            if (c == t[j]) {
                precondition = true;
            }
        }
        if (!precondition) {
            cout << "No" << endl;
            return 0;
        }
    }
    
    cout << "Yes" << endl;
    return 0;
}