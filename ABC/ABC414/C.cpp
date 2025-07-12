#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

bool is_palindrome(const string &s) {
    int len = s.size();
    for (int i = 0; i < len / 2; ++i) {
        if (s[i] != s[len - 1 - i]) return false;
    }
    return true;
}

string to_a_ary(long long n, int a) {
    string result;
    while (n > 0) {
        result = char('0' + n % a) + result;
        n /= a;
    }
    return result;
}

long long create_palindrome(int start, bool odd) {
    string s = to_string(start);
    string rev = s;
    if (odd) rev.pop_back();
    reverse(rev.begin(), rev.end());
    return stoll(s + rev);
}

int main() {
    int a;
    long long n;
    cin >> a >> n;

    long long ans = 0;

    for (int len = 1; ; len++) {
        int start = pow(10, (len - 1) / 2);
        bool odd = (len % 2) != 0;

        for (int i = 0; to_string(start + i).size() == to_string(start).size(); i++) { 
            long long palindrome = create_palindrome(start + i, odd);
            if (palindrome > n) {
                cout << ans << endl;
                return 0;
            } else if (is_palindrome(to_a_ary(palindrome, a))) {
                ans += palindrome;
            }
        }
    }
}
