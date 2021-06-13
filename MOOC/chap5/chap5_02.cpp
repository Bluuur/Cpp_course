//
// Created by 张子栋 on 2021/6/13.
//

/*
 * 编写程序，根据用户输入的值n，建立长度为n的整型数组，再向数组输入n个元素的值，并求其所有元素之和。
 */

#include "iostream"
using namespace std;
int main(){

    int n;
    int sum = 0;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; ++i) {
        cin >> array[i];
        sum += array[i];
    }
    cout << sum;
    return 0;
}