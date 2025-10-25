#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;


int main() {
    long long N;
    map<long long, long long> R;
    long long key, com, num;
    long long res = 0;

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> key;
        R[key]++;
    }


    for (auto r : R) {
        com = (r.second * (r.second - 1)) / 2;
        num = N - r.second;
        res += com * num;
    }

    cout << res << endl;

    return 0;
}