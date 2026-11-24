#include <iostream>
using namespace std;

int bonus = 5;
int calculateScore (int score) {
    int total = score + bonus;
    cout << "函数内部的 total = " << total << endl;

    if ( total >= 60 ){
        return total;
    } else {
        return 0;
    }
}

int main () {
    int score = 58;
    cout << "调用前 score = " << score << endl;
    int result = calculateScore(score);
    cout << "计算结果 = "<< result << endl;
    cout << "调用后 score = "<< score << endl;
    return 0;
}