#include <iostream>
using namespace std;

int main () {

    int num = 120;
    int* p = &num;
    cout << "num的值 = "<< num << endl;
    cout << "p保存的地址 = " << p << endl;
    cout << "*p获取的值 = " << *p << endl;

    return 0;
}