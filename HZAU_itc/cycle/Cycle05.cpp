/*
【问题描述】

一辆卡车违反交通规则，撞人后逃跑。现场有三人目击事件，但都没有记住车号，只记下车号的一些特征。
甲说：牌照的前两位数字是相同的；
乙说：牌照的后两位数字是相同的，但与前两位不同；
丙是数学家，他说：四位的车号所构成的数字正好等于某一个整数的平方。请根据以上线索求出车号。

【输入形式】

无

【输出形式】

直接显示一个四位整数表示肇事车号
*/
#include <iostream>
using namespace std;
int main(){
    int first = 0;
    
    int third = 0;
    
    double num;
    for(first = 1; first <= 9; first++){
        for(third = 0; third <= 9; third++){
            if(first == third){
                continue;
            }else{
                num = first * 1100 + third * 11;
                for(int i = 1; i < 100; i++){
                    if(num / i == i){
                        cout<<num;
                        return 0;
                    }
                }
            }
        }
    }
}
