#include <stdio.h>

int main(){

    // 1表示普通用户，2表示会员用户
    int user_type;
    float price;

    // if(条件){执行语句}
    // else if(条件){执行语句}

    user_type = 2;
    price = 180;

    if (user_type == 1){
        if (price > 100){
            price = 0.95*price;
        }
    }
    else if (user_type == 2){
        if (price > 200){
            price = 0.9*price;
        }
        else {
            price = 0.97*price;
        }
    }
    else{
        printf("该用户类型无效\n");
    }

    printf("最终支付金额为：%.2f",price);
    
    return 0;

}