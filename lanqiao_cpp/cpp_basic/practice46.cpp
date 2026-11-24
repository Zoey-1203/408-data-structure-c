#include <iostream>
using namespace std;

void printMessage () {
    cout << "我正在学习C++函数！" << endl;
}

int main () {

    cout << "程序开始" << endl;
    printMessage();
    cout << "继续执行main" << endl;
    printMessage();
    printMessage();
    cout << "程序结束" << endl;

    return 0;
}