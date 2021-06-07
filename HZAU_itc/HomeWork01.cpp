/*
    【问题描述】

输入日期的年份和月份，求该月有多少天。提示：对于月份为1、3、5、7、8、10、12的月份天数为31，月份为4、6、9、11的月份天数为30，月份为2时要结合年份考虑闰年的情况。

【输入形式】

输入两个正整数y和m分别表示年份和月份。

【输出形式】

如果y和m满足条件：1900<=y<3000，0<m<13，输出该月的天数；否则输出“Input error!”。

【样例输入】

2018 12

【样例输出】

31
*/
#include<iostream>
using namespace std;
int main() {
    int year;
    int month;
    // cout<<"请输入年月（YYYY MM）:";
    cin>>year>>month;
    if (year< 1900 || year>=3000) {//判断年份是否合法
        cout<<"Input error!\n";
        return 0;
    }
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            cout<<31<<endl;
            break;
        case 4: case 6: case 9: case 11:
            cout<<30<<endl;
            break;
        case 2:
            if ((year % 100 == 0) ? (year % 400 == 0) : (year % 4 == 0)) {//判断是否闰年
                cout<<29<<endl; 
            }else{
                cout<<28<<endl;
            }
            break;
        default://月份不合法,提示错误信息
            cout<<"Input error!\n";
    }         
    return 0;
}