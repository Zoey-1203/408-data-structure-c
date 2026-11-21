#include <iostream>
using namespace std;

int main (){

    int n;
    int sum = 0;
    cin >> n;

    for ( int i = 1 ; i <= n ; i++ ) {
        for ( int j = 1 ; j <= 5 ; j++ ) {
            if ( j % 2 == 0 ) {
                continue ;
            }
            if ( j == 5 ) {
                break ;
            }
            cout << i * j << " ";
            sum += i*j;
        }
        cout << endl;
    }

    cout << "sum= " << sum << endl;

    return 0;
}