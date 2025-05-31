#include <iostream>
#include <vector>
using namespace std;

void my_idea(int N, int M) {
    vector<int> count(N + 1, 0);
    count[0] = -1;
 
    for (int i = 1; i < M + 1; i++) {
        int L, R;
        cin >> L >> R;
        for (int j = L; j < R + 1; j++) {
            count[j] += 1;
        }
    }

    int ans = M;
    for (int i = 1; i < N + 1; i++) {
        ans = min(ans, count[i]);
    }

    cout << ans << endl;
}

void good_idea(int N, int M) {
    vector<int> count(N + 2, 0);
    count[0] = 0;
 
    // 差分配列
    for (int i = 1; i < M + 1; i++) {
        int L, R;
        cin >> L >> R;
        count[L] += 1;
        count[R + 1] -= 1;
    }

    // 累積和
    for (int i = 1; i < N + 1; i++) {
        count[i] += count[i - 1];
    }


    int ans = M;
    for (int i = 1; i < N + 1; i++) {
        ans = min(ans, count[i]);
    }

    cout << ans << endl;
}


int main() {
    int N, M;
    cin >> N >> M;

    good_idea(N, M);

    return 0;
}