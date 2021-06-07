/*
【问题描述】

有一个分数序列 2/1,3/2,5/3,8/5,13/8,21/13,.... 求这个分数序列的前n项之和。

【输入形式】

输入有一行：正整数n。

【输出形式】

输出有一行：分数序列的和（浮点数，精确到小数点后4位）。


【提示】 

1. 最好在程序中使用双精度浮点数（double）记录求得的和。

2. 要输出浮点数、双精度数小数点后4位数字，可以用下面这种形式：



按上面的形式控制输出格式时，需在源程序最开始加上一行：#include<iomanip>。

【样例输入】

99

【样例输出】

160.4849
*/
#include<iomanip>
#include<iostream>
using namespace std;
double nextNum(int i);
int main(){
    int n;
    double result = 0;

    cin >> n;
    for(int i = 1; i <= n; i++){
        result += nextNum(i + 1) / nextNum(i);
    }

    cout<<fixed<<setprecision(4)<<result<<endl;
    
}

double nextNum(int i){
    double before = 1;
    double  now = 1;
    double after;

    for(int t = 1; t < i; t++){
        after = now + before;
        before = now;
        now = after;
    }

    return now;
}