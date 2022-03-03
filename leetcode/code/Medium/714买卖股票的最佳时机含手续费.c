#include<stdio.h>
#include<math.h>
#include<string.h>
int maxProfit(int* prices, int pricesSize, int fee) {
    int dp[pricesSize][2];
    memset(dp, 0, sizeof(dp));
    dp[0][0] = -prices[0];
    for(int i = 1; i < pricesSize; i++){
        dp[i][0] = fmax(dp[i - 1][0], dp[i - 1][1] - prices[i]);
        dp[i][1] = fmax(dp[i - 1][1], dp[i - 1][0] + prices[i] - fee);
        printf("%d %d\n", dp[i][0], dp[i][1]);
    }
    return dp[pricesSize - 1][1];
}
int main(){
    int p[6] = {1, 3, 2, 8, 4, 9};
    int a = maxProfit(p, 6, 2); 
    return 0;
}