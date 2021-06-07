/*
    1.体重判断  ★
医务工作者经广泛的调查和统计分析，根据身高与体重因素给出了以下按“体指数”进行体型判断的方法：
		体指数t = 体重w / (身高h)2  （w单位为千克，h单位为米）
当t<18时，为低体重者；
当t介于18和25之间时，为正常体重；
当t介于25和27之间时，为超重体重；
当t≥27时，为肥胖。
用if语句或if-else语句编程，从键盘输入你的身高h和体重w，根据上述给定的公式计算体指数t，然后判断你的体重属于何种类型。

*/
#include<iostream>
using namespace std;
int main(){
    double height;
    double weight;
    double bmi;
    
    cout<<"请输入身高(m):";
    cin>>height;
    cout<<"请输入体重(kg):";
    cin>>weight;
    bmi = (weight / height / height);
    if(bmi < 18){
        cout<<"低体重!";
    }else if(bmi < 25){
        cout<<"正常体重!";
    }else{
        cout<<"超重体重!";
    }

    return 0;
}