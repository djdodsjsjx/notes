#include<stdio.h>
#include<stdbool.h>
bool isPerfectSquare(int num){
    int i = 1;
    while(i <= num/2){
        if((num % i == 0) && (num / i == i) ){
            return true;
        }
        i++;
    }
    return i <= num/2;
}

int main(){
    if(isPerfectSquare(16)){
        printf("true\n");
    }else{
        printf("false\n");
    }
}
