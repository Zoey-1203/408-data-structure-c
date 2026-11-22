#include <iostream>
using namespace std;

int main () {

    int a[5];

    for ( int i = 0 ; i < 5 ; i++ ) {
        cin >> a[i] ;
    }

    int sum = 0;

    for ( int i = 0 ; i < 5 ; i++ ) {
        sum += a[i] ;
    }

    double avg = sum / 5.0;

    cout << "sum = " << sum << endl;
    cout << "avg = " << avg << endl;

    return 0;
}