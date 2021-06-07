/*
    【问题描述】

    模拟计算器的功能，能根据用户输入的两个运算数和运算符（’+’、 ‘-’、 ‘*’ 或‘/ ’），对两个数进行相应的运算，输出运算结果。注意：除法运算‘/ ’的除数不能为0。

    【输入形式】

    两个实数a、b和一个运算符号c，它们之间用空格隔开。

    【输出形式】

    如果能运算，输出a和b的运算结果；如果c为除号，且b为0，输出“Error: divisor is 0!”；如果c不是’+’、 ‘-’、 ‘*’ 或‘/ ’中的运算符号，输出“Operator error!”。

    【样例输入】

    4 9 *

    【样例输出】

    36
*/

#include<iostream>
using namespace std;

int main(){
    double a;
    double b;
    char oper;
    cin>>a>>b>>oper;
    if(oper == '/' && b == 0){
        cout<<"Error: divisor is 0!"<<endl;
        return 0;
    }    
    switch (oper){
        case '+':
            cout<<a + b;
            break;
        
        case '-':
            cout<<a - b;
            break;

        case '*':
            cout<<a * b;
            break;

        case '/':
            cout<<a / b;
            break;

        default:
            cout<<"Operator error!";
            break;
    }
    return 0;
        
}


