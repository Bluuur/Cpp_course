/*
    【问题描述】

在华农校园里，没有自行车，上课办事会很不方便。但实际上，并非去办任何事情都是骑车快，因为骑车总要找车、开锁、停车、锁车等，这要耽误一些时间。
假设找到自行车，开锁并骑上自行车的时间为27秒；停车锁车的时间为23秒；步行每秒行走1.2米，骑车每秒行走3.0米。请判断走不同的距离去办事，是骑车快还是走路快。

【输入形式】

一个整数：为一次办事要行走的距离，单位为米。

【输出形式】

对输入的整数，如果骑车快，输出一行“Bike”；如果走路快，输出一行“Walk”；如果一样快，输出一行“All”。

【样例输入】

    【样例输入1】     【样例输入2】

            50                    120

【样例输出】

    【样例输出1】     【样例输出2】

            Walk                Bike
*/
#include<iostream>
using namespace std;
int main(){
    double bikeTime;
    double bikeVol = 3.0;
    double walkTime;
    double walkVol = 1.2;
    double distance;
    
    cin>>distance;//接受输入的距离
    bikeTime = 50.0 + (distance / bikeVol);
    walkTime = distance / walkVol;
    
    if(walkTime == bikeTime){
        cout<<"All";
    }else if(walkTime < bikeTime){
        cout<<"Walk";
    }else{
        cout<<"Bike";
    }
}