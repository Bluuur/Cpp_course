//
// Created by 张子栋 on 2021/4/26.
//

/*
 * 将不含空格的字符串转换大小写
 *
 * ASCII
 *  65-90大写
 *  97-122小写
 */

#include "iostream"
using namespace std;
int main(){
    string str;
    cin >> str;

    int len = str.length(); //获取字符串长度

    for (int i = 0; i < len; ++i) {//大小写转换
        if(str[i] >= 65 && str[i] <= 90){
            str[i] = (str[i] + 32);
        } else if(((int)str[i]) >= 97 && ((int)str[i]) <= 122){
            str[i] = (str[i] - 32);
        }
    }
    cout << str << endl;
}