#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void push_unique(vector<string> &, string);

int main()
{
    int n;
    cin >> n;
    vector<string> S(n);
    for (auto &s : S)
        cin >> s;

    vector<string> result;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (!(i == j))
            {
                string s = S[i] + S[j];
                push_unique(result, s);
            }
        }
    }

    cout << result.size() << endl;

    return 0;
}

void push_unique(vector<string> &vec, string s)
{
    if (find(vec.begin(), vec.end(), s) == vec.end())
    {
        vec.push_back(s);
    }
}