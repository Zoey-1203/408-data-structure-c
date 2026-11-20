#include <iostream>
using namespace std;

int main (){

    int age, score;
    cin >> age >> score ;

    if ( age >= 18 ) {
        if ( score >= 60 ) {
            cout << "Pass" << endl;
        } else {
            cout << "Fail" << endl;
        }
    } else {
        cout << "Too young" << endl;
    }

    return 0;
}