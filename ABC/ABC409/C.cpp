#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    int n, l;
    cin >> n >> l;
    vector<int> d(n);
    for (int i = 1; i < n; i++) {
        cin >> d[i];
    }

    vector<int> position(n + 1);
    for (int i = 1; i < n; i++) {
        position[i + 1] = (position[i] + d[i]) % l;
    }

    map<int, int> freq;
    for(int i = 1; i <= n; i++) {
        freq[position[i]]++;
    }

    if (l % 3 != 0) {
        cout << 0 << endl;
        return 0;
    }

    int ans = 0;
    for (int i = 0; i < l/3; i++) {
        int angle1_num = freq[i];
        int angle2_num = freq[i + l / 3];
        int angle3_num = freq[i + (l / 3) * 2];
        ans += angle1_num * angle2_num * angle3_num;
    }

    cout << ans << endl;
    return 0;
}