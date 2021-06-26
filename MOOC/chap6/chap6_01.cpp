//
// Created by 张子栋 on 2021/6/18.
//


/*
 * 计算4名学生3门课程成绩的平均分。
 * 在主函数中给定各门课程的成绩和输出计算得到的各平均分，
 * avg函数用于计算各课程的平均分。
 */


#include<iostream>

using namespace std;

class Time {

public:

    Time() {

        h = 0;
        m = 0;
        s = 0;

        cout << "构造Time对象：" << h << ' ' << m << ' ' << s << ' ' << endl;

    }

    Time(int H, int M, int S) {

        h = H;
        m = M;
        s = S;

        cout << "构造Time对象：" << h << ' ' << m << ' ' << s << endl;

    }

    void Show() {

        cout << h << "时" << m << "分" << s << "秒" << endl;

    }

    void AddMinute(int m1) {

        m = m + m1;

        h = h + m / 60;

        if (h > 23) {

            h = h - 24;
        }

        m = m % 60;

    }

    Time() {


    }

private:

    int h, m, s;

};


int main() {

    Time t1, t2(22, 30, 2);

    t1.Show();
    t2.Show();

    t2.AddMinute(100);//将时间t2增加100分钟

    t2.Show();

    return 0;

}