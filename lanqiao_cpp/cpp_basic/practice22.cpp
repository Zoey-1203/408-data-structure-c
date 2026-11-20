#include <iostream>
using namespace std;

int main() {

    int age;
    cin >> age ;

    if ( ! ( age >= 18) ) {
        cout << "Minor" << endl;
    } else {
        cout << "Adult" << endl;
    }

    return 0;
}