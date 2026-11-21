#include <iostream>
using namespace std;

int main () {

    for ( int i = 1 ; i <= 3 ; i++ ) {
        for ( int j = 1 ; j <= 5 ; j++ ) {
            if ( j == 4 ) {
                break;
            }
            cout << i*j << " " ;
        }
        cout << endl;
    }

    return 0;
}