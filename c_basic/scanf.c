#include <stdio.h>

int main(){

    // A代表电子产品，B代表服装
    char category;
    float price;

    printf("商品类别有A-电子产品，B-服装\n请按顺序输入商品类和价格，中间两个值用,连接：");
    // &表示取地址符
    scanf("%c,%f",&category,&price);
    
    switch(category){
        case 'A':
            if (price<500){
                printf("电子产品价格较低，无优惠");
            }
            else if(500<=price<=1000){
                printf("电子产品可享受5%%的优惠");
            }
            else{
                printf("电子产品可享受10%%的优惠");
            }
        break;

        case 'B':
            if (price<200){
                printf("服装价格较低，无优惠");
            }
            else if (200<=price<=500){
                printf("服装可享受8%%的优惠");
            }
            else{
                printf("服装可享受15%%的优惠");
            }
        break;
        default:
            printf("输入不符合要求");
    }

    return 0;

}

