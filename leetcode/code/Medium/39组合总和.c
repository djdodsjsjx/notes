#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int **p;
int *p1;
int *p2;
int p1_k;
int S;
void backtracking(int * candidates, int target, int candidatesSize, int start, int *returnSize){
    if(S == target){
        p[*returnSize] = (int* )malloc(sizeof(int) * p1_k);
        memcpy(p[*returnSize], p1, sizeof(int) * p1_k);
        p2[*returnSize] = p1_k;
        (*returnSize)++;
        return ;
    }else if(S > target) {
        return ;
    }
    for(int i = start; i < candidatesSize && S + candidates[i] <= target; ++i){
        p1[p1_k++] = candidates[i];
        S += candidates[i];
        backtracking(candidates, target, candidatesSize, i, returnSize);
        S -= candidates[i];
        --p1_k;
    }
    return ;
}

int cmp(const void* p1, const void* p2){
    return *(int* )p1 - *(int* )p2;
}
int** combinationSum(int* candidates, int candidatesSize, int target, int* returnSize, int** returnColumnSizes){
    *returnSize = 0;
    S = 0;
    p1_k = 0;
    qsort(candidates, candidatesSize, sizeof(int), cmp);
    p = (int** )malloc(sizeof(int* ) * 10000);
    p2 = (int* )malloc(sizeof(int) * 10000);
    p1 = (int* )malloc(sizeof(int) * target);
    backtracking(candidates, target, candidatesSize, 0, returnSize);
    *returnColumnSizes = (int* )malloc(sizeof(int) * (*returnSize));
    for(int i = 0; i < *returnSize; ++i){
        (*returnColumnSizes)[i] = p2[i];
    }
    for(int i = 0; i < *returnSize; ++i){
        for(int j = 0; j < p2[i]; ++j){
            printf("%d ", p[i][j]);
        }
        printf("\n");
    }
    return p;
}
int main(){
    int k[3] = {2, 3, 5};
    int k1, *k2;
    int** a = combinationSum(k, 3, 8, &k1, &k2);

    return 0;
}