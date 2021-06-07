/*
    3.三角形的类型  ★★★
    编程输入三角形的三条边a、b、c，判断它们能否构成三角形。若能构成三角形，指出是何种三角形：等腰三角形、直角三角形、等边三角形、等腰直角三角形，还是一般三角形？
    提示：
    （1）构成三角形的条件为：任意两边之和大于第三边。
    （2）注意实数比较的问题。使用勾股定理判断直角三角形时，不能使用
        if (a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a)
    直接判断经计算得到的两个实型数是否相等，而是应该使用近似相等的方法进行比较，即
        if (fabs(a*a+b*b-c*c)<=EPS || fabs(a*a+c*c-b*b)<=EPS || fabs(b*b+c*c-a*a)<=EPS)
    如果精度要求不高，EPS取值1e-1即可。fabs是用来求一个实数的绝对值的，要使用fabs需要在程序开始加上一行#include<cmath>。
*/
#include<cmath>
#include<iostream>
using namespace std;
int main(){
    double a;
    double b;
    double c;
    double EPS = 0.1; 

    cout<<"请输入三角形的三条边:";
    cin>>a>>b>>c;

    if(!((a + b) > c && (a + c) > b && (c + b) > a)){
        cout<<"无法构成三角形!";
        return 0;
    }

    if (fabs(a*a+b*b-c*c)<=EPS || fabs(a*a+c*c-b*b)<=EPS || fabs(b*b+c*c-a*a)<=EPS){
        if(a == b || a == c || c == a){
            cout<<"等腰直角三角形";
        }else{
            cout<<"直角三角形";
        }
    }else if (a == b && b == c){
        cout<<"等边三角形";
    }else if(a == b || b == c || c == a){
        cout<<"等腰三角形";
    }else{
        cout<<"一般三角形";
    }
    return 0;
}