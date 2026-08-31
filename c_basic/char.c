#include <stdio.h>

int main(){

    int int_1;
    int_1=80;
    printf("int_1的值为：%d\n",int_1);

    char char_1;
    char_1='A';
    printf("char_1的字符为：%c,对应的ASCII码值为：%d\n",char_1,char_1);

    char char_2;
    char_2=int_1;
    printf("char_2的字符为：%c\n",char_2);

    printf("%zu",sizeof(char));

    return 0;
}
