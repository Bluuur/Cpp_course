#include "iostream"

using namespace std;

double recurtion(int i);

int main(){
    int i;
    cin >> i;
    cout << recurtion(i);
}

double recurtion(int i){
    double result = 1;

    if(1 == i){
        return 1;
    }

    result = i * recurtion(i - 1);

    return result;
}