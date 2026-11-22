#include <iostream>
using namespace std;

int main () {

    int a[5];
    for ( int i = 0 ; i < 5 ; i++ ) {
        cin >> a[i];
    }

    int sum = 0;
    int max = a[0];
    int min = a[0];
    int count = 0;

    for ( int i = 0 ; i < 5 ; i++ ) {
        sum += a[i];
        if ( a[i] % 2 == 0 ) {
            count++;
        }
    }

    for ( int i = 1 ; i < 5 ; i++ ) {
        if ( a[i] > max ) {
            max = a[i];
        }
        if ( a[i] < min ) {
            min = a[i];
        }
    }

    double avg = sum / 5.0;

    cout << "数组总和：" << sum << endl;
    cout << "数组平均值：" << avg << endl;
    cout << "最大值：" << max << endl;
    cout << "最小值：" << min << endl;
    cout << "偶数个数：" << count << endl;

    return 0;
}