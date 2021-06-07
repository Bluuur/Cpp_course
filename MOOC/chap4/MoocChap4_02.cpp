//
// Created by 张子栋 on 2021/4/19.
//

/*
 * 求一个n阶矩阵的转置。
 * 输入n值及矩阵的所有元素，存储在二维数组a中，要求在a中进行转置。
 */
#include <iostream>
using namespace std;
int main(){
    int n;
    cout <<"输入矩阵阶数:";
    cin >> n;
    int matrix[n][n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << "第" << i + 1 << "行," << "第" << j + 1 << "列:";
            cin >> matrix[j][i];
        }
    }
    cout <<"输入矩阵为:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << matrix[j][i] << " ";
        }
        cout << "\n";
    }
    cout << "输出矩阵为:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
}