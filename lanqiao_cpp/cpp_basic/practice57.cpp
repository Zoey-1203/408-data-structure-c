#include <iostream>
using namespace std;

void doubleNum(int* p) {
    *p = *p * 2;
    cout << "函数内部 num = " << *p << endl;
}

int main () {

    int num = 15;
    cout << "调用前 num = " << num << endl;
    doubleNum (&num );
    cout << "调用后 num = " << num << endl;

    return 0;
}