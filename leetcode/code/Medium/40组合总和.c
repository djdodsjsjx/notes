#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
int **p;
int *p1;
int *p2;
int p1_k;
int S;
void backtracking(int * candidates, int target, int candidatesSize, int start, int *returnSize, bool *use){
    if(S == target){
        p[*returnSize] = (int* )malloc(sizeof(int) * p1_k);
        memcpy(p[*returnSize], p1, sizeof(int) * p1_k);
        p2[*returnSize] = p1_k;
        (*returnSize)++;
        return ;
    }
    for(int i = start; i < candidatesSize && S + candidates[i] <= target; ++i){
        if(i > 0 && candidates[i - 1] == candidates[i] && !use[i - 1]){ 
            continue;
        }
        p1[p1_k++] = candidates[i];
        S += candidates[i];
        use[i] = 1;
        backtracking(candidates, target, candidatesSize, i + 1, returnSize, use);
        use[i] = 0;
        S -= candidates[i];
        --p1_k;
    }
    return ;
}

int cmp(const void* p1, const void* p2){
    return *(int* )p1 - *(int* )p2;
}
int** combinationSum2(int* candidates, int candidatesSize, int target, int* returnSize, int** returnColumnSizes){
    *returnSize = 0;
    S = 0;
    p1_k = 0;
    bool use[candidatesSize];
    memset(use, 0, sizeof(use));
    qsort(candidates, candidatesSize, sizeof(int), cmp);
    p = (int** )malloc(sizeof(int* ) * 10000);
    p2 = (int* )malloc(sizeof(int) * 10000);
    p1 = (int* )malloc(sizeof(int) * target);
    backtracking(candidates, target, candidatesSize, 0, returnSize, use);
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
    int k[6] = {2,5,2,1,2,2};
    int k1, *k2;
    int** a = combinationSum2(k, 6, 5, &k1, &k2);
    return 0;
}