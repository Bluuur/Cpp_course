//
// Created by 张子栋 on 2021/4/26.
//

/*
 * 【问题描述】

歌唱大赛选手成绩这样计算：去掉一个最高分，去掉一个最低分，将剩下分数的平均值作为选手的最后得分。现假设共有6位评委，都是按百分制打分，请编程计算选手的成绩。

提示：将6个评分存入score数组中。关键是求出其中的最大值max(即最高分)和最小值min(即最低分)。

【输入形式】

依次输入6位评委的打分score1～score6，每个scorei都是double型，且满足0≤scorei≤100。

【输出形式】

输出一行，表示该选手的最后得分。


提示：输出时不需要对精度特殊控制，用cout<<ANSWER即可。

【样例输入】

78.8 92.3 87.6 94.8 85.8 94.8

【样例输出】

90.125
 */

#include <iostream>
using namespace std;
int main(){
    double scores[6];
    double max = 0;
    double min = 100;
    double sum = 0;
    double avg = 0;

    for (int i = 0; i < 6; ++i) {
        cin >> scores[i];
        sum += scores[i];
        if(scores[i] > max){
            max = scores[i];
        }
        if(scores[i] < min){
            min = scores[i];
        }
    }

    sum -= (max + min);
    avg = sum / 4;

    cout << avg << endl;
    return 0;
}