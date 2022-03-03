#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int **p;
int *p1;
int p1_k = 0;
int S = 0;
void backtracking(int n1, int k, int n, int start, int *returnSize){
    if(p1_k == k){
        if(S == n){
            p[*returnSize] = (int* )malloc(sizeof(int) * k);
            memcpy(p[*returnSize], p1, sizeof(int) * k);
            (*returnSize)++;         
        }
        S -= p1[--p1_k];
        return ;
    }
    for(int i = start; i <= n1 - (k - p1_k) + 1; ++i){
        p1[p1_k++] = i;
        S += i;
        backtracking(n1, k, n, i + 1, returnSize);
    }
    return ;
}
int** combinationSum3(int k, int n, int* returnSize, int** returnColumnSizes){
    *returnSize = 0;
    p = (int** )malloc(sizeof(int* ) * 10000);
    p1 = (int* )malloc(sizeof(int) * k);
    memset(p1, 0, sizeof(int) * k);
    backtracking(9, k, n, 1, returnSize);

    for(int i = 0; i < *returnSize; ++i){
        for(int j = 0; j < k; ++j){
            printf("%d ", p[i][j]);
        }
        printf("\n");
    }

    *returnColumnSizes = (int* )malloc(sizeof(int) * (*returnSize));
    for(int i = 0; i < *returnSize; ++i){
        (*returnColumnSizes)[i] = k;
    }
    return p;
}

int main(){
    int j, *k;
    int** a = combinationSum3(3, 9, &j, &k);

    return 0;
}