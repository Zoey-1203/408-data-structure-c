#include <iostream>
using namespace std;

struct Student {
    int id;
    int score;
};

int main () {
    Student s1,s2;

    s1.id = 1001;
    s1.score = 80;
    s2.id = 1002;
    s2.score = 90;

    s1.score = s1.score + 10;
    s2.score = s2.score + 5;

    cout << "s1学号 = " << s1.id << endl;
    cout << "s1成绩 = " << s1.score << endl;
    cout << "s2学号 = " << s2.id << endl;
    cout << "s2成绩 = " << s2.score << endl;
    
    return 0;
}