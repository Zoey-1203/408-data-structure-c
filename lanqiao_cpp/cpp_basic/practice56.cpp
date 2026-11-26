#include <iostream>
using namespace std;

int main () {

    int num = 50;
    int* p = &num;
    cout << "修改前 num = " << num << endl;
    *p = 100;
    cout << "修改后 num = " << num << endl;
    cout << "通过指针获取的值 = " << *p << endl;

    return 0;
}