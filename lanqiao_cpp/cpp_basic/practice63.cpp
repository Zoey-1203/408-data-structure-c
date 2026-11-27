#include <iostream> 
using namespace std;

struct Student { 
    int id;
    int score;
};

int main () {
    Student arr[3] = {
        {1001, 70},
        {1002, 80},
        {1003, 90}
    };

    for (int i = 0 ; i < 3 ; i++ ) {
        arr[i].score = arr[i].score + 10;
        cout << arr[i].id << " " << arr[i].score << endl;
    }

    return 0;
}