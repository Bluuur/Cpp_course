//
// Created by 张子栋 on 2021/4/26.
//


#include "iostream"
using namespace std;
int main(){
    int len = 0;
    cin >> len;

    int array[len];
    for(int i = 0; i < len; i++){
        cin >> array[i];
    }

    if(array[0] != array[1]){
        cout << 0 << " ";
    }

    for (int i = 1; i < (len - 1); ++i) {
        if((array[i - 1] > array[i] && array[i + 1] > array[i]) || (array[i - 1] < array[i] && array[i + 1] < array[i])){
            cout << i << " ";
        }
    }

    if(array[len - 1] != array[len - 2]){
        cout << len - 1 << endl;
    }
}