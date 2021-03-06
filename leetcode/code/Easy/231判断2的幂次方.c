#include<stdio.h>
#include<stdbool.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    returnSize = (int*)malloc(sizeof(int)*2);
    for(int i = 0; i < numsSize -1;i++){
        for(int j = i + 1; j < numsSize; j++){
            if(nums[i] + nums[j] == target){
                returnSize[0] = i;
                returnSize[1] = j;
                return returnSize;
            }
        }
    }
    return returnSize;
    
}

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