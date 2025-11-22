#include <iostream>
#include <vector>
#include <string>
#include <set>
using namespace std;


int main() {
    int N, A, B;
    cin >> N >> A >> B;
    string S;
    cin >> S;

    int a = 0, b = 0;
    int cnt = 0;
    int L = 0, R = 0;

    while (R < N) {
        a = a + (S[R] == 'a');
        b = b + (S[R] == 'b');

        if (b >= B) {
            while (S[L] == 'a') {
                a--;
                if (a >= A) {
                    cnt++;
                }
                L++;
            }
            b--;
            L++;  
        } else if (a >= A) {
            cnt++;
        }

        R++;
    }

    cout << cnt << endl;

    return 0;
}







/* 自作コード（TLE）

int main() {
    int N, A, B;
    cin >> N >> A >> B;
    string S;
    cin >> S;

    int a, b, di;
    int cnt = 0;

    for (int i = 0; i <= (N - A); i++) {
        a = 0;
        b = 0;
        di = 0;
        while (i + di < N) {
            if (S[i + di] == 'a') {
                a++;
            } else {
                b++;
            }
            
            if (b >= B) {
                break;
            } else if (a >= A) {
                cnt++;
            }
            di++;
        }
    }

    cout << cnt << endl;
    
    return 0;
}

*/