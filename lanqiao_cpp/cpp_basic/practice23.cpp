#include <iostream>
using namespace std;

int main () {

    cout << "请依次输入四个整数：年龄 学生证(1有/0无) 会员卡(1有/0无) 黑名单(1有/0无) " << endl;
    int age, a , b ,c ;
    cin >> age >> a >> b >> c ;

    if ( age >= 18 && ( a || b ) && ( ! (c) ) ) {
        cout << "Eligible" << endl;
    } else {
        cout << "Not Eligible" << endl;
    }

    return 0;
}