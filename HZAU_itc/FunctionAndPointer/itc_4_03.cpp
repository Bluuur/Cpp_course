//
// Created by 张子栋 on 2021/6/7.
//

/*
 * 【问题描述】
 * 许多英语单词无论是顺读还是倒读，其词形完全一样，都是同一个单词，如dad（爸爸）、noon（中午）、level（水平）等，这样的词称为回文词。
 * 在最权威的《牛津英语大词典》里，最长的回文词是tattarrattat，是个象声词，表示敲门的声音。
 * 英语的回文句更有趣味（忽略其中的标点符号）。
 * 最著名的一句为：“Madam，I’m Adam.”（小姐，我是亚当。）据说，这是亚当在伊甸园里初见夏娃作自我介绍时说的话。
 *
 * 现要求编写一个函数bool huiwen(char *p)，判断输入的一个单词是否为回文词。
 * p是指向要输入的字符串的指针，如果是返回true，否则返回false。
 *
 * 【输入形式】
 * 输入一个单词后回车。
 *
 * 【输出形式】
 * 若该单词是回文词，则输出“yes”；否则输出“no”。
 *
 * 【样例输入】
 * level
 *
 * 【样例输出】
 * yes
 */

#include "iostream"
#include "cstring"

using namespace std;

bool huiwen(char *p) {
    char *q = p + strlen(p) - 1;
    for (int i = 0; i < strlen(p) / 2; i++)
        if (*p != *q)
            return false;
    return true;
}

int main() {
    char ch[100];
    cin >> ch;
    if (huiwen(ch))
        cout << "yes";
    else
        cout << "no";
    cin.get();
    cin.get();
}
