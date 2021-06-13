//
// Created by 张子栋 on 2021/6/13.
//

/*
 * 用指针处理从键盘输入的字符串，使其逆序并输出。重复这个过程直到输入空串为止。
 */

#include <iostream>

using namespace std;

int main() {
    string str;
    cin >> str;
    int len = str.length();
    if (str != "") {
        for (int i = 0, j = len - 1; i < j; i++, j--) {
            char c = str[i];
            str[i] = str[j];
            str[j] = c;
        }
        cout << str << endl;
        return 0;
    }
    return 0;
}