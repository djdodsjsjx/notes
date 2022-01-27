#include<stdio.h>

int multiply(int a, int b){
    return b ? a+multiply(a , b - 1) : 0;
}

int main(){
    printf("%d\n",multiply(9,2));
    return 0;
}