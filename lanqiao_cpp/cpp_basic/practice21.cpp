#include <iostream>
using namespace std;

int main (){

    int a, b;
    cin >> a >> b;

    if ( a > 10 || b > 10 ) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}