// malloc 函数 动态分配指定大小的内存空间，返回指向该内存空间的指针
// (强制转换起始地址类型) malloc (分配内存空间大小)
// free 函数 释放之前动态分配的内存空间，避免内存泄漏
// free(释放内存空间地址)

#include<stdio.h>
#include<stdlib.h>
int main(){
    // 静态分配内存，系统自动为变量啊a申请4个字节内存
    int a=0;

    // 定义整型指针p并初始化
    int* p=NULL;

    // 动态分配4个字节的内存
    p=(int*)malloc(sizeof(int));

    // 为p指向的内存空间赋值
    *p=3;

    printf("p指向地址存储数据为%d",*p);

    // 释放指针p指向的内存空间
    free(p);

    // 动态分配10个整型变量内存
    p=(int*)malloc(sizeof(int)*10);

    free(p);

    return 0;
}
// 执行free(p)后，只是把指针p指向的内存空间释放了
// 而指针p并没有消失
// 只是此时指针p存储的地址没有意义了
// 但是指针p可以继续使用