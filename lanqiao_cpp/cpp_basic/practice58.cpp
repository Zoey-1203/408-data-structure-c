#include <iostream>
using namespace std;

int main () {

    int arr[3] = {12, 24, 36};
    int* p = arr;
    cout << "arr[0] = " << arr[0] << endl;
    cout<< "*p = " << *p << endl;
    cout << "arr[1] = " << arr[1] << endl;
    cout << "arr[2] = " << arr[2] << endl;

    return 0;
}