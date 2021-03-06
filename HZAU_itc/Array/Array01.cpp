//
// Created by 张子栋 on 2021/4/26.
//

/*
 * 【问题描述】陶陶家的院子里有一棵苹果树，每到秋天树上就会结出10个苹果。
 * 苹果成熟的时候，陶陶就会跑去摘苹果。
 * 陶陶有个30厘米高的板凳，当她不能直接用手摘到苹果的时候，就会踩到板凳上再试试。
 * 现在已知10个苹果到地面的高度，以及陶陶把手伸直的时候能够达到的最大高度，请帮陶陶算一下她能够摘到的苹果的数目。
 * 假设她碰到苹果，苹果就会掉下来。
 *
 * 【输入形式】输入包括两行数据。
 * 第一行包含10个100到200之间（包括100和200）的整数（以厘米为单位）分别表示10个苹果到地面的高度，
 * 两个相邻的整数之间用一个空格隔开。
 * 第二行只包括一个100到120之间（包含100和120）的整数（以厘米为单位），
 * 表示陶陶把手伸直的时候能够达到的最大高度。
 *
 * 【输出形式】输出只包含一个整数，表示陶陶能够摘到的苹果的数目。
 *
 * 【样例输入】
 * 100 200 150 140 129 134 167 198 200 111
 * 110
 *
 * 【样例输出】
 * 5
 */

#include <iostream>
using namespace std;
int main(){
    int count = 0; //能够到的数目
    int heights[10]; //苹果的高度数组
    int height; //伸手能达到的高度
    int totalHeight; //垫板凳加伸手能达到的总高度
    for (int i = 0; i < 10; ++i) { //从标准输入读取苹果高度到数组
        cin >> heights[i];
    }

    cin >> height; //接受伸手能达到的高度
    totalHeight = height + 30; //计算总高度

    for (int i = 0; i < 10; ++i) { //遍历数组
        if(heights[i] <= totalHeight){ //如果能够到,记录数目
            count += 1;
        }
    }

    cout << count << endl; //输出执行结果
}
