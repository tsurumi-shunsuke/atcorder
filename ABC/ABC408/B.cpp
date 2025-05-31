#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main () {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    sort(A.begin(), A.end());
    auto it = unique(A.begin(), A.end());
    A.erase(it, A.end());

    cout << A.size() << endl;

    for (int num : A) {
        cout << num << " ";
    }

    cout << endl;
    
    return 0;
}