#include <iostream>
using namespace std;

void addTen ( int x ) {
    x = x + 10;
    cout << "函数内部 x= " << x << endl;
}

int main () {

    int num = 5;
    cout << "调用前 num = " << num << endl;
    addTen (num);
    cout << "调用后 num = " << num << endl;

    return 0;
}