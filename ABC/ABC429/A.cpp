#include <iostream>
#include <vector>
#include <string>
using namespace std;

class message
{
public:
    void okMessage() {
        cout << "OK" << endl;
    }
public:
    void ngMessage() {
        cout << "Too Many Requests" << endl;
    }
};

int main() {
    int N, M;
    cin >> N >> M;

    message m;

    for (int i = 0; i < N; i++) {
        if (i < M) {
            m.okMessage();
        } else {
            m.ngMessage();
        }
    }

    return 0;
}