#include<stdio.h>
int sumNums(int n){
    char a[n][n+1];
    return sizeof(a) >> 1;
}

int main(){
    printf("%d\n",sumNums(100));
    return 0;
}