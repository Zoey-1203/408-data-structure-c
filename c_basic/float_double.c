#include <stdio.h>

int main(){

    float float_1,float_2;
    float_1=11.27;
    float_2=11.12345678910;

    // 打印float_1和float_2
    // double:%.2lf代表保留两位小数，%lf默认保留六位
    // float:%.2f或%f，%f默认保留六位，不足6位会用0补齐，超过6位按四设五入截断
    printf("float_1:%.2f,float_2:%.10f\n",float_1,float_2);

    double double_1;
    double_1=11.12345678910;
    printf("float_2:%.10f,double_1:%.10lf",float_2,double_1);
    
    // 打印结果
    // float_2超过了float本身能够测量的精度范围，出现了精度损失
    // float_1:11.27,float_2:11.1234569550
    // float_2:11.1234569550,double_1:11.1234567891

    return 0;
}