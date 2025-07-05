#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<pair<long long, long long>> A;
void query();

int main () {
    int n;
    cin >> n;

    while (n--) query();

    return 0;
}

void query() {
    int type;
    cin >> type;

    if (type == 1) {
        long long c, x;
        cin >> c >> x;
        A.push_back({c, x});
    } else if (type == 2) {
        long long k;
        cin >> k;
        long long ans = 0;

        while (k > 0) {
            long long c = A[0].first;
            long long x = A[0].second;

            if (c <= k) {
                ans += c * x;
                k -= c;
                A.erase(A.begin());
            } else {
                ans += k * x;
                A[0].first -= k;
                k = 0;
            }
        }
        cout << ans << endl;
    }
}
