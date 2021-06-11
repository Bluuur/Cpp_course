//
// Created by 张子栋 on 2021/6/11.
//

/*
 * 【问题描述】
 * 编写一个函数，用于生成一个由若干个指定字符构成的字符串，其原型为：
 * void mystr(char c,int n, char *p);其中，参数c是构造字符串的字符，n是字符串中字符的个数，p是生成的字符串的首地址。
 * 要求：编写主函数，在主函数中进行字符和字符个数的输入，然后再调用mystr函数生成字符串，最后在主函数中将生成的字符串输出。
 * 【输入形式】
 * 输入字符c和正整数n，之间用空格隔开。（正整数n的值不超过50）
 * 【输出形式】
 * 输出为由n个字符c构成的字符串
 * 【样例输入】
 * # 4
 * 【样例输出】
 * ####
 */

#include "iostream"
using namespace std;

void mystr(char c, int n, char *p) {
    for (int i = 1; i <= n; i++)
        cout << c;
    return;
}


int main() {
    char c;
    char *p;
    p = &c;
    int n;
    cin >> c;
    cin >> n;
    mystr(c, n, p);
    return 0;
}
