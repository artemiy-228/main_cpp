// https://stepik.org/lesson/13021/step/16?unit=4362

#include <iostream>

using namespace std;

int main(){
    int h, a, b ;
    cin >> h >> a >> b;
    int r = h - a;
    cout <<  (r + (a - b)  - 1)/ (a - b) + 1;
    return 0;
}
