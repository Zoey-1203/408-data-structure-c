// 数据类型 数组名[整数常量]={元素1，元素2，....};
// 数组的索引值从0开始
// 数组名[索引值]

/*
定义一个包含5个整数的数组arr
然后用scanf函数从用户获取5个整数
并按顺序储存到数组中
最后用for循环分别打印出数组中每个元素的值
*/

#include <stdio.h>
int main(){
    int arr[5];
    printf("请输入分别输入五个整数，分别用空格连接\n");
    int a,b,c,d,e;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    arr[0]=a;
    arr[1]=b;
    arr[2]=c;
    arr[3]=d;
    arr[4]=e;
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
}