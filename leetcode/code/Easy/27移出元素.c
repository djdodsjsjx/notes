#include<stdio.h>
int removeElement(int* nums, int numsSize, int val){
    int j = numsSize - 1;
    for(int i = 0; i <= j; ++i){
        if(nums[i] == val){
            while(j > i && nums[j] == val){
                --j;
            }
            if(j > i) nums[i] = nums[j];
            else break;
            --j;
        }
    }
    printf("%d\n", j);
    return j;
}
int main(){
    int p[8] = {0, 1, 2, 2, 3, 0, 4, 2};
    removeElement(p, 8, 2);
}