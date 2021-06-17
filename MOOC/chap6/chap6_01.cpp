//
// Created by 张子栋 on 2021/6/18.
//


/*
 * 计算4名学生3门课程成绩的平均分。
 * 在主函数中给定各门课程的成绩和输出计算得到的各平均分，
 * avg函数用于计算各课程的平均分。
 */


#include "iostream"

using namespace std;

double avg(double scoreOne, double scoreTwo, double scoreThree);

int main() {
    double scoreOne;
    double scoreTwo;
    double scoreThree;

    cout << "enter your scores:" << endl;
    cin >> scoreOne;
    cin >> scoreTwo;
    cin >> scoreThree;

    cout << "your average score is :" << avg(scoreOne, scoreTwo, scoreThree) << endl;

    return 0;
}

doubel avg(double scoreOne, double scoreTwo, double scoreThree) {
    return (scoreOne + scoreTwo + scoreThree) / 3;
}
