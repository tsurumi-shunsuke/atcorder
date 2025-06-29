#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve1();
void solve2();

int main()
{
    int t;
    cin >> t;
    while (t--) solve2();
}

// 貪欲法
void solve1()
{
    int n;
    int answer = 2;
    cin >> n;
    vector<unsigned int> S(n);
    for (auto &s : S)
        cin >> s;

    int last = 0;
    while (S[last] * 2 < S[n - 1])
    {
        unsigned  num = S[last] * 2;
        int tmp_last = last;
        bool isadded = false;
        for (int j = 1; j < n - 1; j++)
        {
            if (S[j] <= num)
            {
                isadded = true;
                if (S[tmp_last] <= S[j])
                    tmp_last = j;
            }
        }
        if (!isadded)
        {
            answer = -1;
            break;
        }
        last = tmp_last;
        answer++;
    }
    cout << answer << endl;
}

// 二分探索
void solve2()
{
    int n;
    cin >> n;
    vector<unsigned int> S(n);
    for (auto &s : S)
        cin >> s;

    if (n == 2)
    {
        if (S[0] * 2 < S[1]) {
            cout << -1 << endl;
        } else {
            cout << 2 << endl;
        }
        return;
    }

    sort(S.begin() + 1, S.end() - 1);  // 中間部分を昇順にしておく

    int answer = 2;
    int last = 0;

    while (S[last] * 2 < S[n - 1])
    {
        int left = last + 1;
        int right = n - 2;
        int ok = -1;

        // S[mid] が S[last]*2 以下の最大のものを探す
        while (left <= right) {
            int mid = (left + right) / 2;
            if (S[mid] <= S[last] * 2) {
                ok = mid;         // 条件を満たす（候補）
                left = mid + 1;   // もっと右を探す
            } else {
                right = mid - 1;
            }
        }

        if (ok == -1 || S[ok] <= S[last]) {
            // 条件を満たすものがない or 進めない（同じ位置はダメ）
            answer = -1;
            break;
        }

        last = ok;
        answer++;
    }

    cout << answer << endl;
}
