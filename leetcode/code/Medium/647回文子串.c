#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
int countSubstrings(char * s){
    int l = strlen(s);
    bool dp[l][l];
    int S = 0;
    memset(dp, 0, sizeof(dp));
    for(int i = 0; i < l; ++i){
        for(int j = i; j >= 0; --j){
            if(s[i] == s[j] && (i - j <= 1 || dp[i - 1][j + 1])){
                dp[i][j] = 1;
                ++S;
            }
            printf("%d ", dp[i][j]);
        }
        printf("\n");
    }
    return S;
}

int main(){
    char s[] = "fdsklf";
    int a = countSubstrings(s); 
    return 0;
}