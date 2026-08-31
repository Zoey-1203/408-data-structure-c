#include <stdio.h>
#include <math.h>

int main(){
    
    // 常量不可修改，且在定义语句就要声明数值
    // 常量一般命名大写
    const float PI=3.14;
    float s_1,s_2;
    int r_1=2,r_2=8;

    // 计算圆面积
    s_1=PI*pow(r_1,2);
    s_2=PI*pow(r_2,2);
    printf("s_1=%f\n",s_1);
    printf("s_2=%f\n",s_2);

    return 0;

}