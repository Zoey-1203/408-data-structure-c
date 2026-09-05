// continue 跳过当前循环 break 结束当前循环
// for循环适用于已知循环次数 while循环适用于循环次数未知

/*
用for循环打印1到50中的所有偶数
但跳过能被3整除的偶数
并在遇到第一个大于40的偶数时，用break退出循环
打印要求：数字之间用换行分隔
*/

#include <stdio.h>

int main(){
    for(int i=1; i<=50; i++){
        if(i%2==0){
            if(i%3==0){
                continue;
            }
            else{
                if(i<=40){
                    printf("%d\n",i);
                }
                if(i>40){
                    break;
                }
            }
        }
    }
}