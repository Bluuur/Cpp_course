//
// Created by 张子栋 on 2021/6/11.
//

#include  <iostream>

using namespace std;

int letter, digit, space, other;  //全局变量
int main() {
    void addup(char s[]);
    char str[101];
    cin.getline(str, 101);
    addup(str);
    cout << "Letters:  " << letter << ",  numbers:  " << digit << ",  spaces:  " << space << ",  others:" << other
         << endl;
    return 0;
}

void addup(char s[]) {
    int i;
    letter = digit = space = other =
            0;
    for (i = 0; s[i] != '\0'; i++)
        if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z') letter++;
        else if (s[i] >= '0' && s[i] <= '9') digit++;
        else if (s[i] == 32) space++;
        else
            other++;
}