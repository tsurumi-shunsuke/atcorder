#include<iostream>
#include<string>
using namespace std;


int main() {
    int n;
    string t, a;
    cin >> n >> t >> a;

    for (int i = 0; i < n; i++) {
        if (t[i] == 'o' && a[i] == 'o') {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}
