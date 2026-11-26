#include <iostream>
using namespace std;

int findMax( int* p, int n ) {
    int max = *p;
    for ( int i = 0 ; i < n ; i++ ) {
        if ( *p > max ) {
        max = *p;
        }
        p++;  
    }
    return max;
}

int findMin ( int* p, int n ) {
    int min = *p;
    for ( int i = 0 ; i < n ; i++ ) {
        if ( *p < min ) {
            min = *p;
        }
        p++;
    }
    return min;
}

int sumEven ( int* p , int n ) {
    int sum = 0;
    for ( int i = 0 ; i < n ; i++ ) {
        if ( *p % 2 == 0 ) {
            sum = sum + *p;
        }
        p++;
    }
    return sum;
}

int main () {
    int arr[6] = {12, 5, 28, 9, 16, 3};
    int max = findMax(arr, 6);
    int min = findMin(arr, 6);
    int sum = sumEven (arr, 6);
    cout << "最大值 = " << max << endl;
    cout << "最小值 = " << min << endl;
    cout << "偶数之和 = " << sum << endl;

    return 0;
}