//
// Created by 张子栋 on 2021/6/7.
//

/*
 * 【问题描述】
 * 假定现在已是2012年，请编写程序，计算2012年伦敦奥运会倒计时的天数并输出。
 * 已知伦敦奥运会的开幕日期是2012年7月27日。用户输入日期的范围必须是2012年1月1日— 2012年7月26日。
 * 要求程序中编写函数int CountDown(int year,int month,int day)，来计算从用户输入的日期year-month-day到伦敦奥运会开幕日之间的倒数天数。
 *
 * 提示：所求天数= month这个月的总天数－day+(month+1到6月所有这些月份天数之和)+27。
 *
 * 【输入形式】
 * 用户输入的日期的格式必须是year  month  day。其中year应是2012，month必须满足1≤month≤7。输入的数据之间用空格隔开。
 *
 * 【输出形式】
 * 输出为一行，距离2012伦敦奥运会倒计时的天数。如果输入的数据不满足条件，输出“ERROR!”。
 *
 * 【样例输入】
 * 2012 2 5
 *
 * 【样例输出】
 * 173
 */

#include "iostream"

using namespace std;

int countDown(int y, int m, int d) {
    int days;
    switch (m) {
        case 2:
            days += 30 - d;
            break;
        case 1:
        case 3:
        case 5:
            days += 32 - d;
            break;
        case 4:
        case 6:
            days += 31 - d;
            break;
        case 7:
            days += 27 - d;
    }
    for (m += 1; m <= 7; m++) {
        switch (m) {
            case 2:
                days += 29;
                break;
            case 3:
            case 5:
                days += 31;
                break;
            case 4:
            case 6:
                days += 30;
                break;
            case 7:
                days += 26;
        }
    }
    return days;
}

int main() {
    int y;
    int m;
    int d;
    cin >> y;
    cin >> m;
    cin >> d;
    if (y == 2012 && m <= 7 && m >= 1) {
        cout << countDown(y, m, d) << endl;
    } else {
        cout << "ERROR!" << endl;
    }
}