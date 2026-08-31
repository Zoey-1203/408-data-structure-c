#include <stdio.h>

int main(){
    
    // 1代表电子产品，2代表服装
    // 打印出购买服装满299.9元时有什么优惠

    int category=2;
    float price=299.9;

    switch(category){
        case 1:
            if(price < 500){
                // %转义字符
                printf("电子产品价格较低，无优惠");
            }
            else if(500<=price<=1000){
                printf("电子产品可享受5%%的优惠");
            }
            else if(price>1000){
                printf("电子产品可享受10%%的优惠");
            }
            break;
        case 2:
            if(price<200){
                printf("服装可享受15%%的优惠");
            }
            else if (200<=price<=500){
                printf("输出服装可享受8%%的优惠");
            }
            else if(price>500){
                printf("服装可享受15%%的优惠");
            }
            break;
        default:
            printf("找不到该商品类别\n");
        
    }

    return 0;

}