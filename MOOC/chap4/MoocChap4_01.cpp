//
// Created by 张子栋 on 2021/4/19.
//

/*
 * 输入整型数组的元素个数n，依次输入n个数组元素，求其中负数的和。
 * 注意：答题时选择代码语言为“C/C++”，将程序代码填写在答题框内，
 * 并将程序的运行结果截屏保存为jpg文件上传附件。本题程序运行效果参考“作业1.jpg”。
 */

#include <iostream>
using namespace std;
int  main(){
    int n;
    int sum = 0;
    cout << "请输入元素个数：";
    cin >> n;

    int array[n];
    for (int i = 0; i < n; ++i) {
        cin >> array[i];
        if(array[i] < 0){
            sum += array[i];
        }
    }
    cout << "负数和为" << sum <<endl;
}