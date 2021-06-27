//
// Created by 张子栋 on 2021/6/26.
//

#include<iostream>
#include<cmath>

using namespace std;

class point {
public:
    point(float a, float b) {
        x = a;
        y = b;
    }

    friend float Distance(point p1, point p2) {
        float dx = p1.x - p2.x;
        float dy = p1.y - p2.y;
        return (float) sqrt(dx * dx + dy * dy);
    }

private:
    float x, y;
};

int main() {
    float p1_x, p1_y, p2_x, p2_y;
//输入四个点
    cin >> p1_x >> p1_y >> p2_x >> p2_y;
    point p1(p1_x, p1_y), p2(p2_x, p2_y);
    cout << Distance(p1, p2) << endl;
    return 0;
}
