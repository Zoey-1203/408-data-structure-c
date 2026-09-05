// while(表达式){while条件为真循环执行的代码}
// if(表达式){if条件为真执行的代码}
// do{循环执行的代码}while(表达式);
// do while 会先执行do里的代码 再通过while判断是否循环

// 练习
// 分别使用while和do while循环遍历1到100（包含100）
// 筛选出计算出所有偶数，并计算它们的总和
// 打印最终的计算结果
// 打印格式：1到100中所有偶数的和为：值

#include <stdio.h>

int main(){

    int i=1;
    int a=0;

    // c语言不能写连续不等式
    /*
        while(1<=i && i<=100){
            if(i%2==0){a=a+i;}
            i=i+1;
        }
    */

    do{
        if(i%2==0){
            a=a+i;
        }
        i=i+1;
    }while(1<=i && i<=100);

    printf("1到100中所有偶数的和为:%d值",a);

}
