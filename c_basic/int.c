#include <stdio.h>

int main(){
    int mike_score,john_score;
    mike_score=89;
    john_score=98;
    mike_score=john_score;
    john_score=89;
    printf("Mike的成绩为%d分。\n", mike_score);
    printf("Jonh的成绩为：%d\n",john_score);
    return 0;
}