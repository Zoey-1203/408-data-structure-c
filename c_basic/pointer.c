// 指针变量用来储存某个变量的内存地址
// 数据类型* 指针名;

// 初始化时，如果内存地址不确定
// 直接用int* i_ptr;会导致指针保存一个未知的地址，给程序造成未知风险
// 建议内存地址未知时，初始化为int* i_ptr=NULL;

// *i_ptr 表示解引用,代表i这个变量

// *i_ptr=20 表示修改内存地址上储存的变量值为20

/*
定义一个char类型变量ch,并初始化为A
再定义一个指针变量ptr指向变量ch
然后通过指针修改变量ch的值为a
要求打印出变量ch修改前后的值
*/

#include<stdio.h>
int main(){
    char ch='A';
    char* ch_ptr=&ch;
    printf("修改前：%c\n",ch);
    *ch_ptr='a';
    printf("修改后：%c",ch);
}