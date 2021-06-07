//
// Created by 张子栋 on 2021/4/14.
//

#include<cstdlib>
#include <iostream>
using namespace std;
int getRand(int range);
void task1();
void task2();
void task3();
void task4();
void task5();
void task6();

string rightFeedback();
string wrongFeedback();

int addition(int score);
int subduction(int score);
int multi(int score);
int division(int score);

int additionF(int score);
int subductionF(int score);
int multiF(int score);
int divisionF(int score);

int main(){
    while (true){
        int num;
        char flag;
        cout << "如果需要测试任务一,请输入1\n请输入需要测试的任务:";
        cin >> num;
        switch (num) {
            case 1:
                task1();
                break;
            case 2:
                task2();
                break;
            case 3:
                task3();
                break;
            case 4:
                task4();
                break;
            case 5:
                task5();
                break;
            case 6:
                task6();
        }
        while (true){
            cout << "是否继续测试?(Y/N):";
            cin >> flag;
            if(flag == 'Y'){
                break;
            } else if(flag == 'N'){
                return 0;
            } else{
                cout << "输入错误!" << endl;
            }
        }
    }
    return 0;
}

int getRand(int range) {//获取1-10随机数函数
    return (rand() % range + 1);
}


/*
    任务1：程序首先随机产生两个1～10之间。例的正整数，在屏幕上打印出问题如：
    6*7=？
    然后让学生输入答案。程序检查学生输入的答案是否正确。若正确，则打印“Right！”，然后问下一个问题；否则打印“Wrong！Please try again.”，然后提示学生重做，直到答对为止。
 */
void task1(){
    while(true){
        int result;
        int x = getRand(50);
        int y = getRand(50);
        cout << x << "+" << y << "= ?" << endl;
        while (true){
            cin >> result;
            if(result == (x + y)){
                cout << "对" << endl;
                break;
            } else{
                cout << "错" << endl;
            }
        }
    }
}

void task2(){//任务2：在任务1的基础上，当学生回答错误时，最多给三次重做的机会，三次仍未做对，则显示“Wrong! You have tried three times! Test over!”，程序结束。
    int count = 0;
    while(true){
        int result;
        int x = getRand(10);
        int y = getRand(10);
        cout << x << "*" << y << "= ?" << endl;
        while (true){
            cin >> result;
            if(result == (x * y)){
                cout << "Right!" << endl;
                break;
            } else{
                count += 1;
                cout << "Wrong！Please try again." << endl;
                if(count == 3){
                    cout << "Wrong! You have tried three times! Test over!" << endl;
                    return;
                }
            }
        }
    }
}

/*
 * 任务3：在任务1的基础上，连续做10到乘法运算题，不给机会重做，若学生回答正确，则显示“Right!”，否则显示“Wrong!”。
 * 10道题全部做完后，按每题10分统计并输出总分，同时为了记录学生能力提高的过程，在输出学生的回答正确率（即答对题数除以总题数的百分比）。
 */
void task3(){
    int result;
    int score = 0;
    float rate;

    for (int i = 0; i < 10; i++) {
        int x = getRand(10);
        int y = getRand(10);
        cout << x << "*" << y << "= ?" << endl;
        cin >> result;
        if(result == (x * y)){
            score += 1;
            cout << "Right!" << endl;
        } else{
            cout << "wrong" << endl;
        }
    }

    rate = (score * 10);
    cout << "Your score is " << score << "\nYour accuracy rate is " << rate << "%" << endl;
}


/*
 * 任务4：在任务3的基础上，通过计算机随机产生10道四则运算题，两个操作数为1～10之间的随机数，
 * 运算类型为随机产生的加、减、乘、整除中的任意一种，不给重做的机会，
 * 如果学生正确，则显示“Right!”，否则显示“Wrong!”。10道题全部做完后，按每题10分统计总得分，然后打印出总分和学生的回答正确率。
 */
void task4(){
    int score = 0;
    int rate;
    for (int i = 0; i < 10; ++i) {
        switch (getRand(4)) {
            case 1:
                score = addition(score);
                break;
            case 2:
                score = subduction(score);
                break;
            case 3:
                score = multi(score);
                break;
            case 4:
                score = division(score);
        }
    }
    rate = (score * 10);
    cout << "Your score is " << score << "\nYour accuracy rate is " << rate << "%" << endl;
}

void task5() {//任务5：在任务4的基础上，为使学生通过反复练习熟练掌握所学内容，在学生完成10道运算题后，若回答正确率低于75%，则重新做10道题，直到回答正确率高于75%时才退出程序。
    int rate;
    while (true){
        int score = 0;
        for (int i = 0; i < 10; ++i) {
            switch (getRand(4)) {
                case 1:
                    score = addition(score);
                    break;
                case 2:
                    score = subduction(score);
                    break;
                case 3:
                    score = multi(score);
                    break;
                case 4:
                    score = division(score);
            }
        }
        rate = (score * 10);
        cout << "Your score is " << score << "\nYour accuracy rate is " << rate << "%" << endl;
        if(score > 7){
            break;
        }
    }
}

void task6() {
    int rate;
    while (true) {
        int score = 0;
        for (int i = 0; i < 10; ++i) {
            switch (getRand(4)) {
                case 1:
                    score = additionF(score);
                    break;
                case 2:
                    score = subductionF(score);
                    break;
                case 3:
                    score = multiF(score);
                    break;
                case 4:
                    score = divisionF(score);
            }
        }
        rate = (score * 10);
        cout << "Your score is " << score << "\nYour accuracy rate is " << rate << "%" << endl;
        if (score > 7) {
            break;
        }
    }
}


int addition(int score) {
    int result;

    int x = getRand(10);
    int y = getRand(10);
    cout << x << "+" << y << "= ?" << endl;
    cin >> result;
    if(result == (x + y)){
        score += 1;
        cout << "Right!" << endl;
    } else{
        cout << "Wrong!" << endl;
    }
    return score;
}

int subduction(int score) {
    int result;

    int x = getRand(10);
    int y = getRand(10);
    cout << x << "-" << y << "= ?" << endl;
    cin >> result;
    if(result == (x - y)){
        score += 1;
        cout << "Right!" << endl;
    } else{
        cout << "Wrong!" << endl;
    }
    return score;
}

int multi(int score) {
    int result;

    int x = getRand(10);
    int y = getRand(10);
    cout << x << "*" << y << "= ?" << endl;
    cin >> result;
    if(result == (x * y)){
        score += 1;
        cout << "Right!" << endl;
    } else{
        cout << "Wrong!" << endl;
    }
    return score;
}

int division(int score) {
    int result;

    int x = getRand(10);
    int y = getRand(10);
    if(x % y == 0){
        cout << x << "/" << y << "= ?" << endl;
        cin >> result;
        if(result == (x / y)){
            score += 1;
            cout << "Right!" << endl;
        } else{
            cout << "Wrong!" << endl;
        }
    }
    return score;
}

int additionF(int score) {
    int result;

    int x = getRand(10);
    int y = getRand(10);
    cout << x << "+" << y << "= ?" << endl;
    cin >> result;
    if(result == (x + y)){
        score += 1;
        cout << rightFeedback() << endl;
    } else{
        cout << wrongFeedback() << endl;
    }
    return score;
}

int subductionF(int score) {
    int result;

    int x = getRand(10);
    int y = getRand(10);
    cout << x << "-" << y << "= ?" << endl;
    cin >> result;
    if(result == (x - y)){
        score += 1;
        cout << rightFeedback() << endl;
    } else{
        cout << wrongFeedback() << endl;
    }
    return score;
}

int multiF(int score) {
    int result;

    int x = getRand(10);
    int y = getRand(10);
    cout << x << "*" << y << "= ?" << endl;
    cin >> result;
    if(result == (x * y)){
        score += 1;
        cout << rightFeedback() << endl;
    } else{
        cout << wrongFeedback() << endl;
    }
    return score;
}

int divisionF(int score) {
    int result;

    int x = getRand(10);
    int y = getRand(10);
    if(x % y == 0){
        cout << x << "/" << y << "= ?" << endl;
        cin >> result;
        if(result == (x / y)){
            score += 1;
            cout << rightFeedback() << endl;
        } else{
            cout << wrongFeedback() << endl;
        }
    }
    return score;
}

string rightFeedback(){
    switch (getRand(4)) {
        case 1:
            return  "Very good!";
        case 2:
            return "Excellent!";
        case 3:
            return "Nice work!";
        case 4:
            return "Keep up the good work!";
    }
}

string wrongFeedback() {
    switch (getRand(4)) {
        case 1:
            return "No. Please try again.";
        case 2:
            return "Wrong. Try once more.";
        case 3:
            return "Don’t give up!";
        case 4:
            return "Not correct. Keep trying.";
    }
}
