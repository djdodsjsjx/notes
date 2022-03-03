#include<stdio.h>
#include<math.h>
#include<string.h>
int maxProfit(int* prices, int pricesSize){
    int dp[pricesSize][4];
    memset(dp, 0, sizeof(dp));
    dp[0][1] = -prices[0];
    dp[0][3] = -prices[0];
    for(int i = 1; i < pricesSize; i++){
        dp[i][0] = fmax(dp[i - 1][0], dp[i - 1][1] + prices[i]);
        dp[i][1] = fmax(dp[i - 1][1], -prices[i]);
        dp[i][2] = fmax(dp[i - 1][2], dp[i - 1][3] + prices[i]);
        dp[i][3] = fmax(dp[i - 1][3], dp[i - 1][0] - prices[i]);
        printf("%d %d %d %d\n", dp[i][0], dp[i][1], dp[i][2], dp[i][3]);
    }
    return dp[pricesSize - 1][2];
}

int main(){
    int p[5] = {1,5,3,7,9};
    int a = maxProfit(p, 5); 
    return 0;
}