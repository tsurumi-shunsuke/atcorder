#include <iostream>
#include <vector>
#include <string>
#include <set>
using namespace std;


int main() {
    int N, M;
    cin >> N >> M;
    vector<string> S(N);
    for (int i = 0; i < N; i++) {
        cin >> S[i];
    }

    set<string> patterns;

    for (int i = 0; i < (N - M + 1); i++) {
        for (int j = 0; j < (N - M + 1); j++) {
            string pat;
            pat.reserve(M * M);
            for (int k = 0; k < M; k++) {
                for (int l = 0; l < M; l++) {
                    pat.push_back(S[i + k][j + l]);
                }
            }
            patterns.insert(pat);
        }
    }

    cout << patterns.size() << endl;    
    
    
    return 0;
}