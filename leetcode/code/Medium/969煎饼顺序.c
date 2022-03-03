#include<stdio.h>
#include<stdlib.h>

void replace(int* p1, int* p2){
    (*p1) = (*p1) + (*p2);
    (*p2) = (*p1) - (*p2);
    (*p1) = (*p1) - (*p2);
}
int* pancakeSort(int* arr, int arrSize, int* returnSize){
    int* p = (int* )malloc(sizeof(int)*arrSize*10);
    int i = 0, j = arrSize - 1, index = 0;
    int max = -1;
    while(i <= j){
        while(i <= j){
            if(max < arr[i]){
                max = arr[i];
                index = i;
            }
            i++;
        }
        if(index < j){
            (*returnSize) += 2;
            p[(*returnSize)-2] = index;
            p[(*returnSize)-1] = j;
            for(int k = 0; k <= index/2; k++){
                replace(&arr[k],&arr[index-k]);
            }
            for(int k = 0; k <= j/2; k++){
                replace(&arr[k],&arr[j-k]);
            }
        } 
        i = 0;
        j--;
        max = -1;
        index = 0;
    }
    (*returnSize) = arrSize;
    return arr;
}

int main(){
    int arr[4] = {3,2,4,1};
    int returnSize = 0;
    int* p = pancakeSort(arr,4,&returnSize);
    // printf("%d\n",p[2]);
    printf("%c\n",'R'+'L'-'L');
    return 0;
}