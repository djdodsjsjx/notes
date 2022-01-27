#include<stdio.h>

int search1(int* nums, int numsSize, int target){
    for(int i = 0; i < numsSize; i++){
        if(nums[i] == target) return i;
    }
    return -1;
}

int search2(int* nums, int numsSize, int target){
    int i = 0, j = numsSize - 1;
    if(nums[0] < target){
        while(nums[i] != target){
            if(nums[i+1] < nums[i]) break;
            i++;
        }
        if(nums[i] == target) return i;
    }
    if(nums[j] > target){
        while(nums[j] != target){
            if(nums[j-1] > nums[j]) break;
            j--;
        }
        if(nums[j] == target) return j;
    }
    return -1;
}

int search(int* nums, int numsSize, int target){
    int first = 0,last = numsSize -1,mid;
    if(first == last) return (nums[first] == target) ? 0 : -1;
    while(first <= last){
        mid = (first + last)/2;
        if(nums[mid] == target)return mid;
        if(nums[mid] >= nums[0]){
            if(nums[first] <= target && nums[mid] > target){
                last = mid - 1;
            }else{
                first = mid + 1;
            }
        }else{
            if(nums[last] >= target && nums[mid] < target){
                first = mid + 1;
            }else{
                last = mid - 1;
            }
        }
    }
    return -1;
}