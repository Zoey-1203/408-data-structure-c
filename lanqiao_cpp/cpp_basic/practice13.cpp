#include <iostream>
using namespace std;

int main (){
    int a , b , c;
    cin >> a >> b >> c;

    int result_1 = a + b * c;
    int result_2 = ( a + b ) * c;
    int result_3 = a - b / c;

    cout << result_1 << endl;
    cout << result_2 << endl;
    cout << result_3 << endl;

    return 0;
}