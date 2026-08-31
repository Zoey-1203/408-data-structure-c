#include <stdio.h>
#include <math.h>

int main(){
    
    // 要计算的数据类型会影响到计算结果
    // 如result_1算式中10/8，两个数都是整数，最终计算结果为1
    int result_1;
    result_1=2+10/8*3;
    printf("result_1:%d\n",result_1);

    // result_2中包含小数，最终计算结果就是小数
    double result_2;
    result_2=2+10/8.0*3;
    printf("result_2:%f\n",result_2);

    // 建立求根公式
    int a=-1;
    int b=-2;
    int c=3;
    double x_1,x_2;
    // sqrt开根，pow(底数，指数)
    x_1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
    x_2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
    printf("x_1=%.10lf\n",x_1);
    printf("x_2=%.10lf\n",x_2);

    return 0;

}