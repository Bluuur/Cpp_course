//编写程序，输入两个正整数m和n，求出这两个数的最大公约数并显示出来。
#include<iostream>
using namespace std;
int main(){
    int m;
    int n;
    int min;
    cout<<"请输入两个正整数:";
    cin>>m>>n;
    for((m < n ? min = m : min = n); min > 0; min--){
        if(m % min == 0 && n % min == 0){
            cout<<m<<"和"<<n<<"的最大公约数是"<<min<<endl;
            break;
        }
    }
}