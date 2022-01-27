#include<stdio.h>
int divide(int dividend, int divisor){
    long int i = divisor;
    long int count = 1;
    if(dividend == -2147483648 && divisor == -1) return 2147483647;
    if(dividend == 0)  return 0;

    if(dividend > 0 && divisor > 0){
        if(dividend < i)  return 0; 
        while(dividend >= i + i){
            i = i + i;
            count = count + count;
        }
        return count + divide(dividend-i , divisor) ;
    }
    if(dividend > 0 && divisor < 0){
        if(dividend < 0 - i)  return 0; 
        while(dividend >= 0 - i - i){
            i = i + i;
            count = count + count;
        }
        count = 0 - count;
        return count + divide(dividend+i , divisor) ;
    }

    if(dividend < 0 && divisor < 0){
        if(dividend > i)  return 0; 
        while(dividend <= i + i){
            i = i + i;
            count = count + count;
        }
        return count + divide(dividend-i , divisor) ;
    }
    if(dividend < 0 && divisor > 0){
        if(dividend > 0 - i)  return 0; 
        while(dividend <= 0 -i - i){
            i = i + i;
            count = count + count;
        }
        count = 0 - count;
        return count + divide(dividend+i , divisor) ;

    }
    
}

int main(){
    printf("%d\n",divide(2,-3));
    return 0;
}