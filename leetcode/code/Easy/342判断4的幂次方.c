#include<stdio.h>
#include<stdbool.h>
bool isPowerOfFour(int n){
    return (n > 0) && ((n & (n - 1)) == 0) && ((n & 0x55555555) == n);
}

int main(){
    if(isPowerOfFour(64)){
        printf("true");
    }else{
        printf("false");
    }
    return 0;
}