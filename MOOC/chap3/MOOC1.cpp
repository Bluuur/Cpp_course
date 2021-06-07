//编写程序，求能被7整除 且个位数字为9的所有三位数，将满足条件的数每10个一行显示，并输出满足条件的数的个数。
#include<iostream>
using namespace std;
int main(){
    int count = 0;
    cout<<"满足条件的数有："<<endl;
    for(int i = 100; i < 1000; i++){
        if(i % 7 == 0 && (i % 10) == 9){
            cout<<"  "<<i;
            count++;
        }
    }
    cout<<"\n"<<"满足条件的数有"<<count<<"个"<<endl;
}