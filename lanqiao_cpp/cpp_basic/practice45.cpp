#include <iostream>
using namespace std;

int main () {

    int a[5];

    for ( int i = 0 ; i < 5 ; i++ ) {
        cin >> a[i] ;
    }

    int target;
    int index = -1;
    cin >> target ;

    for ( int i = 0 ; i < 5 ; i++ ) {
        if ( target == a[i] ) {
            index = i;
            break;
        }
    }

    if ( index == -1 ) {
        cout << "没有找到" <<endl;
    } else {
        cout << "找到了，下标为：" << index << endl;
    }

    return 0;
}