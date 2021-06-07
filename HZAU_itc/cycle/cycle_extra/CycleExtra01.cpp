//
// Created by 张子栋 on 2021/4/13.
//

/*
    1.计算sin(x)的值
    利用泰勒展开式，计算sin(x)的值，直到最后一项的绝对值小于10-5时，输入x的值，输出sin(x)的值并统计累加的项数。（x是弧度值，例如输入1.57，输出结果sin(1.57)≈1）
 */
#include <iostream>
using namespace std;
double factorial(int num);
float sine(float x);
int main(){
    float x;
    cout << "请输入弧度:";
    cin >> x;
    cout << "sin(" << x << ")=" << sine(x) << endl;
    return 0;
}

float sine(float x){//使用泰勒展开式求正弦值
    float result = 0;
    float above = 1;//分子
    float temp;//缓存每一项的绝对值
    int no = 0;//记录当前项数
    int power = 1;//幂次
    while(true){//死循环,泰勒展开有无穷多项
        no++;
        //计算分子
        for (int i = 0; i < power; ++i) {//计算x的power次幂
            above *= x;
        }
        temp = above / factorial(power);//得到每一项
        above = 1;
        power += 2;//取奇数
        (no % 2) == 0 ? result -= temp : result += temp;//加上奇数项,减去偶数项
        if(temp < 0.00001){//精度足够高,跳出循环
            break;
        }
    }
    return result;
}

double factorial(int num){//求阶乘
    double result = 1;
    for(int i = num; i > 0; i--){
        result *= i;
    }
    return result;
}