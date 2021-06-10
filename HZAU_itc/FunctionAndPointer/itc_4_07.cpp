//
// Created by 张子栋 on 2021/6/8.
//

#include  <iostream>
#include  <cstring>

using namespace std;

int main() {
    void SubString(char s[], int start, int len, char d[]);
    char s[81];
    char d[81];
    int m, n;
    cin.getline(s, 81);        //输入一个字符串的值存放在字符数组s中，以回车结束
    cout << "从第m个字符开始(m≥1)取n个字符构成的子串。请依次输入m、n的值：";
    cin >> m >> n;
    if (m > strlen(s) || n > strlen(s) || m + n > strlen(s) + 1) {
        cout << "m,n are out of range!\n";
        return 0;
    }
    SubString(s, m, n, d);
    cout << d << endl;
    return 0;
}

//从s中第start个字符开始取出长度为len的子串放入d中
void SubString(char s[], int start, int len, char d[]) {
    int k, j;
    for (j = 0, k = start - 1; j <= len; j++, k++) {
        d[j] = s[k];
    }
    d[len] = '\0';//字符串d结束

}