#include <iostream>
using namespace std;

int main () {

    int num = 50;
    int* p = &num;

    cout << "num的值 = "<< num << endl;
    cout << "num的地址 = "<< &num << endl;
    cout << "p保存的地址 = "<< p << endl;

    return 0;
}