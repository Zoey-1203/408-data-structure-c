#include <iostream>
using namespace std;

int num = 100;

void changeNum() {
    int x = 20;
    num = num + 50;
    cout << "changeNum中的num = "<< num << endl;
    cout << "changeNum中的x = " << x << endl;
}

int main () {

    int a = 10;
    cout << "main中的a = " << a << endl;
    cout << "全局变量num = " << num << endl;
    changeNum ();
    cout << "修改后的num = " << num << endl;
    cout << "main中的a = " << a << endl;

    return 0;
}