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

    cin >> strA;
    cin >> strB;

    int lenA = strA.length();
    int lenB = strB.length();

    if(lenB < lenA){
        char strC[lenA];
        for (int i = 0; i < lenB; ++i) {
            strA[i] > strB[i] ? strC[i] = strA[i]: strC[i] = strB[i];
        }
        for(int i = lenA; i < lenB; i++){
            strC[i] = strA[i];
        }
        cout << strC;
        return 0;
    }

    char strC[lenB];
    for (int i = 0; i < lenA; ++i) {
        strA[i] > strB[i] ? strC[i] = strA[i]: strC[i] = strB[i];
    }
    for(int i = lenA; i < lenB; i++){
        strC[i] = strB[i];
    }
    cout << strC;
    return 0;
}