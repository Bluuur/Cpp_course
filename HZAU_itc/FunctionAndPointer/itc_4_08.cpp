//
// Created by 张子栋 on 2021/6/11.
//

#include  <iostream>

using namespace std;

int main() {
    bool divide(int n);
    int i, n;
    cin >> n;
    if (n < 6) {
        cout << "Input  error!\n";
        return 0;
    }
    for (i = 6; i <= n; i += 2)
        if (divide(i) == n){          //对i进行分解，并判断分解是否成功
            cout << "Guess  wrong!\n";
            return 0;
        }
    return 0;
}

bool divide(int n) {
    bool IsPrime(int n);
    int i, m;
    for (i = 3; i <= n / 2; i++) {
        if (!IsPrime(i)) { continue; }
        m = n - i;
        if (IsPrime(m))
            break;        //若m是素数，则分解已成功，结束该循环
    }
    if (i > n / 2) {
        return false;
    }
    cout << n << "=" << i << "+" << m << endl;
    return true;
}

bool IsPrime(int m) {
    int i;
    for (i = 2; i < m; i++) {
        if (m % i == 0) return false;
    }
    return true;
}