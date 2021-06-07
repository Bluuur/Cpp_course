/*
【问题描述】

一球从某一高度落下（整数，单位米），每次落地后反跳回原来高度的一半，再落下。编程计算气球在第5次落地时，共经过多少米? 第5次反弹多高？

【输入形式】

输入一个整数h0，表示球的初始高度。

【输出形式】

两个数据s和h，分别表示第5次落地时共经过s米，第5次反弹高度为h米，s和h用空格隔开。


注意：结果可能是实数，结果用double类型保存。

提示：输出时不需要对精度特殊控制，用cout<<ANSWER即可。

【样例输入】

10

【样例输出】

28.75 0.3125
*/

#include <iostream>
using namespace std;
int main(){
    double height;
    double total;
    cin >> height;
    for(int i = 0; i < 5; i++){
        total += height * 1.5;
        height /= 2;   
    }
    total -= height;
    cout << total <<" " << height;
    
}