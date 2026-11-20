#include <iostream>
using namespace std;

int main (){

    int score ;
    cin >> score ;

    if ( score >= 90 and score <= 100 ) {
        cout << "Excellent" << endl;
    } else if ( score >= 80 ) {
        cout << "Good" << endl;
    } else if ( score >= 60 ) {
        cout << "Pass" << endl;
    } else {
        cout << "Fail" << endl;
    }

    return 0;
    
}