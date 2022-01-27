#include<stdio.h>

double myPow(double x, long long n){
    double y;
    if(n == 0) return 1;
    if(n > 0){
        y = myPow(x,n/2);
        return ((n%2) == 1) ?   y * y * x  :   y * y ;
    }
    if(n < 0){
        return 1.0/myPow(x,-n);
    }
    return 0;
}

int main(){
    printf("%1f\n",myPow(2.00000,-2147483648));
    return 0;
}