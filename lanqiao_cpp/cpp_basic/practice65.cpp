#include <iostream>
using namespace std;

struct Student {
    int id;
    int score;
};

void addScore ( Student* p ) {
    p->score = p->score + 10;
}

int main () {
    Student arr[3] = {
        {1001, 70},
        {1002, 80},
        {1003, 90}
    };

    for ( int i = 0 ; i < 3 ; i++ ) {
        addScore ( &arr[i] );
    }

    for ( int i = 0 ; i < 3 ; i++ ) {
        cout << arr[i].id << " " << arr[i].score << endl;
    }

    return 0;
}