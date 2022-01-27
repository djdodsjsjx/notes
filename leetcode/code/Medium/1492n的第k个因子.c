#include<stdio.h>
int kthFactor(int n, int k){
    int i = 1,count=0;
    while(i <= n){
        if((n % i) == 0){
            count++;
            if(count == k)return i;
        }
        i++;
    }
    if(count < k) return -1;
}

int main(){
    printf("%d\n",kthFactor(1000,3));
    return 0;
}