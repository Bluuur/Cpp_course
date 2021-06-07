/*
    2.奖学金  ★★
某校的惯例是在每学期的期末考试之后发放奖学金。发放的奖学金共有五种，获取的条件各自不同：
1) 院士奖学金，每人8000元，期末平均成绩高于80分（>80），并且在本学期内发表1篇或1篇以上论文的学生均可获得；
2) 五四奖学金，每人4000元，期末平均成绩高于85分（>85），并且班级评议成绩高于80分（>80）的学生均可获得；
3) 成绩优秀奖，每人2000元，期末平均成绩高于90分（>90）的学生均可获得；
4) 西部奖学金，每人1000元，期末平均成绩高于85分（>85）的西部省份学生均可获得；
5) 班级贡献奖，每人850元，班级评议成绩高于80分（>80）的学生干部均可获得；
只要符合条件就可以得奖，每项奖学金的获奖人数没有限制，每名学生也可以同时获得多项奖学金。
例如姚林的期末平均成绩是87分，班级评议成绩82分，同时他还是一位学生干部，那么他可以同时获得五四奖学金和班级贡献奖，奖金总数是4850元。
编程输入一个学生的相关信息“期末平均成绩 班级评议成绩 发表论文的篇数 是否为学生干部（输入Y表示是，否则输入N） 是否是西部省份学生（输入Y表示是，否则输入N）”，计算这个学生的奖学金总额。
       

*/

#include<iostream>
using namespace std;
int main(){
    //定义变量
    bool isOffical = false;
    bool isWest = false;
    char flag;
    double finalScor = 0;
    double classScor = 0;
    int jounNum = 0;
    
    int yuanShi = 0;
    int wuSi = 0;
    int youXiu = 0;
    int xiBu = 0;
    int gongXian = 0;

    //获取信息
    cout<<"期末平均成绩:";
    cin>>finalScor;
    cout<<"班级评议成绩:";
    cin>>classScor;
    cout<<"发表论文篇数:";
    cin>>jounNum;

    while (true){
        cout<<"是否为学生干部(Y/N):";
        cin>>flag;
        if(flag == 'N'){
            isOffical = false;
            break;
        }else if (flag == 'Y'){
            isOffical == true;
            break;
        }else{
            cout<<"输入错误!";
        }
    }

    while (true)
    {
        cout<<"是否西部省份学生(Y/N):";
        cin>>flag;
        if(flag == 'N'){
            isOffical = false;
            break;
        }else if (flag == 'Y'){
            isOffical == true;
            break;
        }else{
            cout<<"输入错误!";
        }
    }
    
    if(finalScor > 80 && jounNum >= 1){//院士奖学金，每人8000元，期末平均成绩高于80分（>80），并且在本学期内发表1篇或1篇以上论文的学生均可获得；
        yuanShi = 8000;
    }

    if(finalScor > 85 && classScor > 85){//五四奖学金，每人4000元，期末平均成绩高于85分（>85），并且班级评议成绩高于80分（>80）的学生均可获得；
        wuSi = 4000;
    }

    if(finalScor > 90){//成绩优秀奖，每人2000元，期末平均成绩高于90分（>90）的学生均可获得；
        youXiu = 2000;
    }

    if(finalScor > 85 && isWest){//西部奖学金，每人1000元，期末平均成绩高于85分（>85）的西部省份学生均可获得；
        xiBu = 1000;
    }

    if(finalScor > 80 && isOffical){//班级贡献奖，每人850元，班级评议成绩高于80分（>80）的学生干部均可获得；
        gongXian = 850;
    }

    cout<<"奖学金总额为:"<<yuanShi + wuSi + youXiu + xiBu + gongXian;

    return 0;
}
