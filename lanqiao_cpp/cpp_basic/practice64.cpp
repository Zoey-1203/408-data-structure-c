#include <iostream>
using namespace std;

struct Student {
    int id;
    int score;
};

void addScore (Student s) {
    s.score = s.score + 20;
    cout << "函数内部成绩 = " << s.score << endl;
}

int main () {
    Student s1 = {1001, 70 };
    addScore (s1);
    cout << "main中的成绩 = " << s1.score << endl;
    return 0;
}