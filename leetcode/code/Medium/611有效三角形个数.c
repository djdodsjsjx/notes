#include<stdio.h>
#include<stdlib.h>
// int cmp(const void *a, const void *b) {
//     return *(int *)a - *(int *)b;
// }

// int triangleNumber(int* nums, int numsSize){
//     int i, j, k;
//     int ans = 0;
//     qsort(nums, numsSize, sizeof(int), cmp);       // (1)
//     for(i = 0; i < numsSize; ++i) {
//         j = i + 1;
//         k = j + 1;                                 // (2)
//         while(j < numsSize) {
//             while(k < numsSize) {
//                 if(nums[i] + nums[j] <= nums[k]) {
//                     break;                         // (3)
//                 }
//                 ++k;               
//             }
//             ans += k-j-1;                          // (4)
//             ++j;                                   // (5)
//             if(k == j) k++;
//         }
        
//     }    
//     return ans;
// }


int main(){
    int nums[4] = {2,2,3,4};
    triangleNumber(nums,4);
    return 0;
}