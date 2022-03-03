#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char *a[10] = { "\0", "\0",  "abc\0", "def\0", "ghi\0", "jkl\0", "mno\0", "pqrs\0", "tuv\0", "wxyz\0"};
char **p;
char *p1;
int p_k;
int digits_l;
void backtracking(char * digits, int start){
    if(start == digits_l){
        p1[digits_l] = '\0';
        p[p_k] = (char* )malloc(sizeof(char) * (digits_l + 1));
        memcpy(p[p_k++], p1, sizeof(char) * (digits_l + 1));
        return ;
    }
    for(int i = 0; i < strlen(a[digits[start] - '0']); ++i){
        p1[start] = a[digits[start] - '0'][i];
        backtracking(digits, start + 1);
    }
    return ;
}
char ** letterCombinations(char * digits, int* returnSize){
    *returnSize = 1;
    p_k = 0;
    digits_l = strlen(digits);
    for(int i = 0; i < digits_l; ++i){
        (*returnSize) *= strlen(a[digits[i] - '0']);
    }
    p = (char** )malloc(sizeof(char* ) * (*returnSize));
    p1 = (char* )malloc(sizeof(char) * (digits_l + 1));
    backtracking(digits, 0);
    if(*returnSize == 1) *returnSize = 0;
    for(int i = 0; i < *returnSize; ++i){
        for(int j = 0; j < digits_l; ++j){
            printf("%c", p[i][j]);
        }
        printf("\n");
    }
    return p;
}
int main(){
    int i;
    letterCombinations("54", &i);

    return 0;
}