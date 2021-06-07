//
// Created by 张子栋 on 2021/6/4.
//

/*
 *输入不含空格的字符串s及待删除的字符ch，将s中所有与ch相同的字符都删除掉，输出删除后得到的新串。要求直接在数组s中进行删除，得到的新串仍然在数组s中。
 * 注意：答题时选择代码语言为“C/C++”，将程序代码填写在答题框内，并将程序的运行结果截屏保存为jpg文件上传附件。
 * 本题程序运行效果参考“作业4.jpg”。
 */

#include "iostream"

using namespace std;
int main(){
    string srcStr;
    char delChar;
    cout << "请输入一个不含空格的字符串:";
    cin >> srcStr;
    int srcLen = srcStr.length();

    cout << "请输入需要删除的字符:";
    cin >> delChar;

    int j = 0;
    for (int i = 0; i < srcLen; i++) {
        if (srcStr[i] != delChar) {
            srcStr[j] = srcStr[i];
            cout << srcStr[j];
            j++;
        }
    }


};