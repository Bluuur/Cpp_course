#include<iostream>
using namespace std;
class Calculator
{
    public:
        Calculator(float,float);
        float add( ); //计算a+b并显示结果
        float subtract( );
        float multiply( );
        float divide();

    private:
        float a,b,r;
};

Calculator::Calculator(float x,float y){
    a=x;
    b=y;
}

float Calculator::add( ){   
    r=a+b;
    cout<<a<<"+"<<b<<"="<<r<<endl;
}

float Calculator:: subtract( ){
    r=a-b;
    cout<<a<<"-"<<b<<"="<<r<<endl;
}

float Calculator::multiply( ){
    r=a*b;
    cout<<a<<"*"<<b<<"="<<r<<endl;
}

float Calculator::divide(){
    r=a/b;
    cout<<a<<"/"<<b<<"="<<r<<endl;
}
int main( ){
    float a, b;
    cin>>a>>b; //从键盘输入运算数a、b
    Calculator cal( a , b ); //用a和b初始化创建的Calculator类对象cal
    cal.add( ); //计算a+b并显示结果
    cal.subtract( );
    cal.multiply( ); 
    cal.divide( );
    return 0;
}