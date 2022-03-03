#include<stdio.h>
#include<math.h>
#include<string.h>
int longestPalindromeSubseq(char * s){
    int l = strlen(s);
    int dp[l][l];
    memset(dp, 0 , sizeof(dp));
    for(int i = 0; i < l; ++i) dp[i][i] = 1;
    for(int i = 0; i < l; ++i){
        for(int j = i - 1; j >= 0; --j){
            if(s[i] == s[j]) dp[i][j] = dp[i - 1][j + 1] + 2;
            else dp[i][j] = fmax(dp[i - 1][j], dp[i][j + 1]);
        }
    }
    //打印
    for(int i = 0; i < l; ++i){
        for(int j = 0; j < l; ++j){
            printf("%d ", dp[i][j]);
        }
        printf("\n");
    }
    return dp[l - 1][0];
}

int main(){
    int a = longestPalindromeSubseq("cbbd"); 
    return 0;
}