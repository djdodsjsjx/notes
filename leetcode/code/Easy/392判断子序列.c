#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
bool isSubsequence(char * s, char * t){
    int length1 = strlen(s);
    int length2 = strlen(t);
    int dp[length1 + 1][length2 + 1];
    memset(dp, 0, sizeof(dp));
    for(int i = 0; i < length1; ++i){
        for(int j = 0; j < length2; ++j){
            if(s[i] == t[j]) dp[i + 1][j + 1] = dp[i][j] + 1;
            else dp[i + 1][j + 1] = fmax(dp[i + 1][j], dp[i][j + 1]);
            printf("%d ", dp[i + 1][j + 1]);
        }
        printf("\n");
    }
    if(dp[length1][length2] == length1) return 1;
    return 0;
}
int main(){
    char s[] = "abc";
    char t[] = "ahbgdc";
    int a = isSubsequence(s, t); 
    return 0;
}