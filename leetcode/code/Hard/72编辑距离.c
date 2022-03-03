#include<stdio.h>
#include<math.h>
#include<string.h>
int minDistance(char * word1, char * word2){
    int length1 = strlen(word1);
    int length2 = strlen(word2);
    int dp[length1 + 1][length2 + 1];
    for(int i = 0; i <= length1; ++i){
        dp[i][0] = i;
    }
    for(int j = 1; j <= length2; ++j){
        dp[0][j] = j;
    }
    for(int i = 0; i < length1; ++i){
        for(int j = 0; j < length2; ++j){
            if(word1[i] == word2[j]) dp[i + 1][j + 1] = dp[i][j];
            else dp[i + 1][j + 1] = fmin(dp[i + 1][j], dp[i][j + 1]) + 1;
            printf("%d ", dp[i + 1][j + 1]);
        }
        printf("\n");
    }
    return dp[length1][length2];
}
int main(){
    char s[] = "horse";
    char t[] = "ros";
    int a = minDistance(s, t); 
    return 0;
}