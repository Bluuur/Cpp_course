//
// Created by 张子栋 on 2021/6/11.
//

#include  <iostream>

using namespace std;

int main() {
    int fact(int n);
    int n, f;
    cin >> n;
    f = fact(n);
    cout << n << "!=" << f << endl;
    return 0;
}

int fact(int n) {
    int f;
    if (n == 0)
        f = 1;
    else
        f = f * fact(f - 1);
    return f;
}