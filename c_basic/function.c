// 假设数组A中有n个不同的整数
// 请写出书怒查找任一元素x的算法
// 若查找成功，则返回元素在数组中的位置
// 若查找失败，则返回-1

#include<stdio.h>

int Locate (int A[],int x,int n){
    for(int i=0;i<n;i++){
        if(A[i]==x){
            return i;
        }
        }
    return -1;
    }


int main(){
    int A[5]={6,8,4,2,1};
    int x;
    scanf("%d",&x);
    int pos=Locate(A,x,5);
    printf("%d在数组A中的位置是下标%d",x,pos);
    return 0;
}