//
// Created by 张子栋 on 2021/4/26.
//

/*
 * ASCII
 *  65-90大写
 *  97-122小写
 */

#include "iostream"
using namespace std;
int main(){
    string str;
    cin >> str;

    int len = str.size();

    for (int i = 0; i < len; ++i) {
        if(((int)str[i]) >= 65 && ((int)str[i]) <= 90){
            str[i] = (char) (str[i] + 32);
        } else if(((int)str[i]) >= 97 && ((int)str[i]) <= 122){
            str[i] = (char) (str[i] - 32);
        }
    }
    cout << str << endl;
}