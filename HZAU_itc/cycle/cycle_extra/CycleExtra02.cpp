//
// Created by 张子栋 on 2021/4/14.
//

/*
      2. 跳水高手 ★★★
    5位跳水高手参加10米高台跳水决赛，有好事者让5人据实力预测比赛结果。
    A选手说：B第二，我第三；
    B选手说：我第二，E第四；
    C选手说：我第一，D第二；
    D选手说：C最后，我第三；
    E选手说：我第四，A第一。
    决赛成绩公布之后，每位选手的预测都只说对了一半，即一对一错。请编程解出比赛的实际名次。（A第3名，B第1名，C第5名，D第2名，E第4名）

 */

#include <iostream>
using namespace std;
bool isTrue(int a, int b, int c , int d, int e);
int main(){
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;

    int count = 0;

    for (a = 1; a <= 5; a++) {
        for(b = 1; b <= 5; b++){
            if(a == b){
                continue;
            }
            for(c = 1; c <= 5; c++){
                if(c == b || c == a){
                    continue;
                }
                for(d = 1; d <= 5; d++){
                    if(d == c || d == b || d == a){
                        continue;
                    }
                    for(e = 1; e <= 5; e++){
                        if(e == d || e == c || e == b || e == a){
                            continue;
                        } else {
                            if(isTrue(a, b, c, d, e)){
                                cout << "A第" << a << "名," << "B第" << b << "名,"<< "C第" << c << "名,"<< "D第" << d << "名,"<< "E第" << e << "名" << endl;

                            }
                        }
                    }
                }
            }
        }
    }
}

bool isTrue(int a, int b, int c , int d, int e){
    if((a == 3 || b == 2) && !(a == 3 && b == 2)){
        if((b == 2 || e == 4) && !(b == 2 && e == 4)){
            if((c == 1 || d == 2) && !(c == 1 && d == 2)){
                if((c == 5 || d == 3) && !(c == 5 && d == 3)){
                    return (e == 4 || a == 1) && !(e == 4 && a == 1);
                }else {
                    return false;
                }
            }else {
                return false;
            }
        }else {
            return false;
        }
    } else {
        return false;
    }
}