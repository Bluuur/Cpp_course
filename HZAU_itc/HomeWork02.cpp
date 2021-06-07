/*
    【问题描述】

某高校录取研究生的要求是，新生的每门课成绩不低于60分，总成绩不低于340分，370分以下为自费。编一程序实现输入一个学生的四门课成绩，试判断该生为该校录取的情况

（“没有通过”、“自费生”、“公费生”三种情况）。

【输入形式】


输入四门课的成绩，成绩均为0~150之间的整数。

【输出形式】


录取结果。（“No pass”、“Self-supported student”、“Government-supported student”）

【样例输入】

60 100 130 80

【样例输出】

Government-supported student
*/

#include<iostream>
using namespace std;
int main(){
    int grade1;
    int grade2;
    int grade3;
    int grade4;
    int sum;

    cin>>grade1>>grade2>>grade3>>grade4;
    sum = grade1 + grade2 + grade3 + grade4;

    if (grade1 < 60 || grade2 < 60 || grade3 < 60 || grade4 < 60 || sum < 340){
        cout<<"No pass"<<endl;
    } else if (sum >= 340 && sum < 370){
        cout<<"Self-supported student"<<endl;
    } else {
        cout<<"Government-supported student"<<endl;
    }
    
}

void demo(){
    //分开声明变量,增加代码可读性
    int a;//最好让变量名有意义,做到见名知意
    int b;
    int c;
    int d;
    int e;

    // cout<<"请输入成绩：";根据题目要求.这路不需要有提示
    cin>>a>>b>>c>>d;//接受用户输入的四个值
    if(a >= 60 && b >= 60 && c >= 60 && d >= 60 && e >= 340){//变量与预算符之间使用空格隔开,增加代码可读性
    //以下语句可以执行,说明每门成绩都大于60分,且总成绩大于340
    //那么 if(e >= 340 && e <370),这个条件语句有必要这样写吗?
        if (e < 370){
            cout<<"Self-supported student"<<endl;//根据题目样例输出,不需要提示中文,否则不能通过
        }else{
            //这里代码能够执行,说明各科及格,并且总成绩大于等于370,那么还需要写条件语句判断if(e >= 370)吗?
            cout<<"Government-supported student"<<endl;
        }
        //能在这里输出No pass吗?为什么
    
    }else{//这里属于第一个if语句(括号里面内容最多的一个),如果代码执行到这里,说明第一个if语句的条件没通过(不及格)
        cout<<"No pass"<<endl;
    }


}