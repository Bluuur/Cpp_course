#include <iostream>
using namespace std;
int main(){
    while (true){
        char flag;
        bool isOfficial;
        cout<<"是否为学生干部(Y/N):";
        cin>>flag;
        if(flag == 'N'){
            isOfficial = false;
            break;
        }else if (flag == 'Y'){
            isOfficial == true;
            break;
        }else{
            cout<<"输入错误!"<<endl;
        }
    }
}
