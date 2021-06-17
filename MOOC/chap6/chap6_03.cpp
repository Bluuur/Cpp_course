/*
    编写程序。输入一个正整数判断其是否是质数。
    要求设计一个函数对正整数n是否是质数进行判断，是质数函数返回1，不是质数返回0。
*/

#include "iostream"

using namespace std;

bool judge(int number){
    for (int i = 2; i < number; i++){
        if(number % i == 0){
            return false;
        } else {
            return true;
        }
    }
    
}

int main(){
    int number;
    cin >> number;
    cout << judge(number);
}