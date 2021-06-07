//
// Created by 张子栋 on 2021/6/7.
//

/*
 * 【问题描述】
 * 判断正整数n是否为完数。已知一个数如果恰好等于除它本身外的所有因子之和，这个数就称为完数。
 * 此程序要求编写函数bool wanshu(int n)，判断n是否为完数，
 * 若n是，则函数返回true；
 * 否则返回false。
 * 然后主函数通过该函数的返回值，在屏幕上输出判断结果。
 *
 * 【输入形式】
 * 输入一个正整数n。
 *
 * 【输出形式】
 * 若n是完数，则输出"yes"；否则输出"no"。
 *
 * 【样例输入】
 * 28
 *
 * 【样例输出】
 * yes
 */

#include "iostream"
using namespace std;

bool judge(int n){
    int sum = 0;
    int init = n;
    for (int i = 1; i < n; ++i) {
        if(n % i == 0){
           sum += i;
//           cout << "i=" << i << endl;
//           cout << "n=" << n << "    " << "sum=" << sum << endl;
        }
    }

    if(sum == init){
        return true;
    } else {
        return false;
    }
}

int main(){
    int n;
    cin >> n;
//    cout << "n=" << n <<endl;
    if(judge(n)){
        cout << "yes" << endl;
    } else{
        cout << "no" << endl;
    }
}
