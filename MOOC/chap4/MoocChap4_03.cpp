//
// Created by 张子栋 on 2021/4/19.
//

/*
 * 假设一个字符串中不含空格，输入该字符串并统计其中字母和非字母的个数。
 * 注意：答题时选择代码语言为“C/C++”，将程序代码填写在答题框内，并将程序的运行结果截屏保存为jpg文件上传附件。
 * 本题程序运行效果参考“作业3.jpg”。
 */

#include<iostream>
using namespace std;
int main(){
   string str;
   cout << "请输入一个不含空格的字符串:";
   cin >> str;
   int len = str.length();
   int countLetter = 0;
   int contPunct = 0;
    for (int i = 0; i < len; ++i) {//遍历字符串数组
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')){
            countLetter += 1;
        } else{
            contPunct += 1;
        }
    }
    cout << "字母个数:" << countLetter << endl;
    cout << "字符个数:" << contPunct << endl;
}

