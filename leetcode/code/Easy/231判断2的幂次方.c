#include<stdio.h>
#include<stdbool.h>

bool isPowerOfTwo(int n){
    if(n <= 0)  return false;
    while(n%2 == 0){
        n = n >> 1;
    }
    return n == 1;
}

int main(){
    if(isPowerOfTwo(8)){
        printf("true");
    }else{
        printf("false");
    }
    return 0;
}