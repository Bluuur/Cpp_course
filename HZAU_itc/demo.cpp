//
// Created by 张子栋 on 2021/5/21.
//

#include "iostream"
#include "string"
using namespace std;
string myStrRev(string string1);
int main(){
    string string1;
    cout << "Please enter a string :" ;
    getline(cin,string1);//可以改为 cin >> string; 但是不能接受包含空格的字符串

    cout << myStrRev(string1) << endl;//将输入的字符串传给myStrRev()方法,然后输出调用myStrRev()方法的返回值
}

/**
 *
 * @param string1 传入的目标字符串
 * @return 返回反转的字符串
 */
string myStrRev(string string1){
    int len = string1.length();//获取字符串长度
//    cout << "length of string is " << len << endl;
    int halfLen;//字符串长度的一半
    if(len % 2 ==0){
        halfLen = (len / 2);//为偶数,直接除二
    } else {
        halfLen = ((len - 1) / 2);//为奇数,获取字符串长度-1的一半
    }
//    cout << "halfLen is " << halfLen <<endl;
    for (int i = 0; i < halfLen; ++i) {//字符串对称轴的一边换到另一边,所以将字符串对称轴左边的一半遍历(也可以遍历右边)

        //交换对称字符串的位置
        char temp = string1[len - 1 - i];//string[len - 1 - i]是与string[i]对称的元素
        string1[len - 1 - i] = string1[i];
        string1[i] = temp;
    }
    return string1;//返回翻转后的字符串
}