#include<stdio.h>
int getSum(int a, int b){
    return b ? getSum(a ^ b , (unsigned int)(a & b)<<1) : a;
}

int main(){
    printf("%d\n",getSum(9,2));
    return 0;
}