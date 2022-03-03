#include<stdio.h>
#include<stdlib.h>
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

int main(){
    int num[3] = {3,2,4};
    int *returnSize = (int* )malloc(sizeof(int)*2);
    returnSize = twoSum(num, 3, 6, returnSize);
    printf("[%d,%d]\n",returnSize[0],returnSize[1]);
}