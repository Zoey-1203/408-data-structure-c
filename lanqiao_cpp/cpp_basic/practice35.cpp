#include <iostream>
using namespace std;

int main () {

    int a[5];
    for ( int x = 0 ; x < 5 ; x++){
        int m;
        cin >> m;
        a[x] = m;
    }


    for (int i = 0 ; i < 5 ; i++) {
        cout << a[i] << endl;
    }

    return 0;
}