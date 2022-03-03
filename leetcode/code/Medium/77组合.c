#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int **p;
int *p1;
int p1_k = 0;

void backtracking(int n, int k, int startIndex, int *returnSize){
    if(p1_k == k){
        p[*returnSize] = (int* )malloc(sizeof(int) * k);
        memcpy(p[*returnSize], p1, sizeof(int) * k);
        (*returnSize)++;
        return ;
    }
    for(int i = startIndex; i <= n; ++i){
        p1[p1_k++] = i;
        backtracking(n, k, i + 1, returnSize);
        --p1_k;
    }
    return ;
}


// void backtracking(int n, int k, int startIndex, int step, int *returnSize){
//     if(step == k){
//         p[*returnSize] = (int* )malloc(sizeof(int) * k);
//         memcpy(p[*returnSize], p1, sizeof(int) * k);
//         (*returnSize)++;
//         return ;
//     }
//     for(int i = startIndex; i <= n; ++i){
//         p1[step] = i;
//         backtracking(n, k, i + 1, step + 1, returnSize);
//     }
//     return ;
// }
int** combine(int n, int k, int* returnSize, int** returnColumnSizes){
    *returnSize = 0;
    p = (int** )malloc(sizeof(int* ) * 5000);
    p1 = (int* )malloc(sizeof(int) * k);
    memset(p1, 0, sizeof(int) * k);
    backtracking(n, k, 1, returnSize);
    *returnColumnSizes = (int* )malloc(sizeof(int) * (*returnSize));
    for(int i = 0; i < *returnSize; ++i){
        (*returnColumnSizes)[i] = k;
    }

    for(int i = 0; i < *returnSize; ++i){
        for(int j = 0; j < k; ++j){
            printf("%d ", p[i][j]);
        }
        printf("\n");
    }
    return p;
}

int main(){
    int j, *k;
    int** a = combine(1, 1, &j, &k);

    return 0;
}