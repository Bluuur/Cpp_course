/*
    【问题描述】

    一个停车场的标准收费是3小时之内收5元，超过3小时，每增加1小时加收2元；如果时间不是整数，按比例收取，
    例如：如果输入为3.6小时，则费用为5 + (3.6-3)*2 = 6.2 元。最高收费为40元。
    假设任何车辆的停车时间都不超过24小时。编写程序，计算每辆车的停车费。

    提示
    要输出浮点数、双精度数小数点后2位数字，可以用下面这种形式：
    cout<<fixed<<setprecision(2)<<cost<<endl;
    按上面的形式控制输出格式时，需在源程序最开始加上一行：#include<iomanip>。

    【输入形式】
    输入停车的时间t。

    【输出形式】
    输出应该收取的停车费用cost，保留小数点后2位。

    【样例输入】
    3.46

    【样例输出】
    5.92
*/
#include<iomanip>
#include<iostream>
using namespace std;
int main(){
    float time;
    float charge;

    cin>>time;

    if (time <= 3.0){
        charge = 5.0;
    }else{
        charge = 5.0 + ((time - 3.0) * 2);
    }

    if(charge < 40){
        cout<<fixed<<setprecision(2)<<charge<<endl;
    }else{
        cout<<fixed<<setprecision(2)<<40.00<<endl;
    }
    
}