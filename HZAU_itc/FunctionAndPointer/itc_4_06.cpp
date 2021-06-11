//
// Created by 张子栋 on 2021/6/11.
//

#include<iostream>

using namespace std;

int main() {
    int daynum(int year, int month);
    int y, m, d;
    cin >> y >> m;
    if (y < 1900 || y >= 3000 || m < 1 || m > 12) {
        cout << "Input  error!" << endl;
        return 0;
    }
    d = daynum(
            y, m
    );        //以y、m作实参调用函数，求出该月的天数
    cout << "The  number  of  days  of  the  month  is  " << d << endl;
    return 0;
}

int daynum(int year, int month) {
    int days;
    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            days = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            days = 30;
            break;
        case 2:
            if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
                days = 29;
            else
                days = 28;
            break;
    }
    return
            days;
}