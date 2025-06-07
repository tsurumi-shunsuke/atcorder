#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve();

int main() {
    int T;
    cin >> T;

    while(T--) {
        solve();
    }

    return 0;
}

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> count(n);

    // 累積和の計算
    count[0] = (s[0] == '0' ? -1 : 1);
    for (int i = 1; i < n; i++) {
        count[i] = count[i - 1] + (s[i] == '0' ? -1 : 1);
    }

    
    int ans = n;
    for (int r = 0; r < n; r++) {
        auto it = min_element(count.begin(), count.begin() + r);
        int l = distance(count.begin(), it);
        int score = 0;
        for (int i = 0; i < n; i++) {
            
            if ((i <= l) && (l != 0)) {
                if (s[i] == '1') score++;
            } else if (i <= r) {
                if (s[i] == '0') score++;
            } else if (i < n) {
                if (s[i] == '1') score++;
            }
        }

        ans = min(ans, score);
    }

    cout << ans << endl;
    return;
}