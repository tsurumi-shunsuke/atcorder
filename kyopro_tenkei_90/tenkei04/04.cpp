#include <iostream>
#include <vector>
#include <string>
using namespace std;



int main() {
    string error_message = "input error!";
    int H, W;
    cin >> H >> W;

    if (H < 2 || 2000 < W) {
        cout << error_message << endl;
        return 1;
    }

    vector<vector<int>> matrix(H, vector<int> (W));

    // 行列数値の入力
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            int number;
            cin >> number;
            if (0 < number && number < 100) {
                matrix[i][j] = number;
            } else {
                cout << error_message << endl;
                return 1;
            }
        }
    }

    // 行ごと，列ごとの数値の和を計算．これによって最終的な計算時間を短縮．
    vector<int> row(H);
    vector<int> column(W);

    for (int i = 0; i < H; i++) {
        int row_sum = 0;
        for (int j = 0; j < W; j++) {
            row_sum += matrix[i][j];
        }
        row[i] = row_sum;
    }

    for (int i = 0; i < H; i++) {
        int column_sum = 0;
        for (int j = 0; j < W; j++) {
            column_sum += matrix[j][i];
        }
        column[i] = column_sum;
    }


    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            matrix[i][j] = (row[i] + column[j] - matrix[i][j]);
        }
    }

    for (auto row : matrix) {
        for (int num : row){
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}