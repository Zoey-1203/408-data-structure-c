#include <iostream>
using namespace std;

int getSum( int arr[2][3] ) {

    int sum = 0;

    for ( int i = 0 ; i < 2 ; i++ ) {
        for ( int j = 0 ; j < 3 ; j++ ) {
            sum = sum + arr[i][j];
        }
    }

    return sum;
}

int countEven ( int arr[2][3] ) {

    int count = 0;

    for ( int i = 0 ; i < 2 ; i++ ) {
        for ( int j = 0 ; j < 3 ; j++ ) {
            if ( arr[i][j] % 2 == 0 ) {
                count++;
            }
        }
    }

    return count;
}

int main () {

    int arr[2][3] = {
        {7 ,2 ,9},
        {4 ,6 ,3}
    };

    int sumResult = getSum( arr );
    int evenCount = countEven( arr );

    cout << "数组总和 = " << sumResult << endl;
    cout << "偶数个数 = " << evenCount << endl;

    return 0;
}