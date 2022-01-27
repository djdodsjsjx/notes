#include<stdio.h>
int add(int a, int b){
    return b ? add(a ^ b , (unsigned int)(a & b)<<1) : a;
}

int main(){
    printf("%d\n",add(9,2));
    return 0;
}