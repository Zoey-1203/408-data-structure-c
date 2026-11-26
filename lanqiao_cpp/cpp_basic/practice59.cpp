#include <iostream>
using namespace std;

int main () {

    int arr[4] = {8, 16, 24, 32};
    int* p = arr;
    cout << *p << endl;
    p++;
    cout << *p << endl;
    p++;
    cout << *p << endl;
    p++;
    cout << *p << endl;

    return 0;
}