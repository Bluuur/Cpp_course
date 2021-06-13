//
// Created by 张子栋 on 2021/6/13.
//

/*
 * 输入两个字符串a和b，并动态构造一个新的字符串c。
 * 要求是：将a和b对应字符中的较大者存入c对应的位置上，若a和b不一样长，则将较长字符串多出部分的字符全部依序存入c中。
 */

#include "iostream"

using namespace std;

int main() {
    string strA;
    string strB;
    string strC;

    cin >> strA;
    cin >> strB;

    int lenA = strA.length();
    int lenB = strB.length();

    if (lenB < lenA) {
        for (int i = 0; i < lenB; ++i) {
            for (int j = 0; j < lenA; ++j) {
                strA[i] < strB[i] ? strC[i] = strB[i] : strC[i] = strA[i];
            }
        }

        for (int i = lenB; i < lenB; ++i) {
            strC[i] = strA[i];
        }
        return 0;
    }

    for (int i = 0; i < lenA; ++i) {
        for (int j = 0; j < lenB; ++j) {
            strA[i] < strB[i] ? strC[i] = strB[i] : strC[i] = strA[i];
        }
    }
    for (int i = lenB; i < lenB; ++i) {
        strC[i] = strA[i];
    }
    return 0;
}