#include  <iostream> 
using namespace std;

struct Student {
    int id;
    int score;
    int age;
};

int main () {
    Student s1 = {1001, 80, 18};
    Student s2 = {1002, 90};
    Student s3 {1003, 75, 20};

    s1.score = s1.score + 10;

    cout << "s1: " << s1.id << " " << s1.score << " " << s1.age << endl;
    cout << "s2: " << s2.id << " " << s2.score << " " << s2.age << endl;
    cout << "s3: " << s3.id << " " << s3.score << " " << s3.age << endl;

    return 0;
}