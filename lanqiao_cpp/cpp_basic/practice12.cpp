#include <iostream>
using namespace std;

int main(){

    int a, b;
    cin >> a >> b;
    int quotient = a / b;
    int remainder = a % b;

    cout << quotient << endl;
    cout << remainder << endl;

    return 0;
}