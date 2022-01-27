#include<stdio.h>
#include<stdbool.h>
bool isPowerOfThree(int n){
    if(n <= 0)  return false;
    while(n % 3 == 0){
        n = n /3;
    }
    return n == 1;      
}




int main(){
    if(isPowerOfThree(9)){
        printf("true");
    }else{
        printf("false");
    }
    return 0;
}