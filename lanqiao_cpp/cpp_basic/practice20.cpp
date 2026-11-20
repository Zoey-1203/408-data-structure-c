#include <iostream>
using namespace std;

int main (){

    int age, score;
    cin >> age >> score ;

    if ( age >= 18 && score >= 60 ) {
        cout << "Pass" << endl;
    } else {
        cout << "Fail" << endl;
    }

    return 0;
}