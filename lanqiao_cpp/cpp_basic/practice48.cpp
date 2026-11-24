#include <iostream>
using namespace std;

int add( int a , int b ) {
    return a + b;
}

int main () {

    int x = 15;
    int y = 25;
    int result = add (x,y);

    cout << result << endl;

    return 0;
}