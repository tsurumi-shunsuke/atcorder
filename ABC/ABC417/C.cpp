#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;


int main() {
    int N;
    cin >> N;

    long ans = 0;
    map<int, int> counter;

    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        ans += counter[i - a];
        counter[i + a]++;
    }

    cout << ans << endl;

    return 0;
}