// 給定幾種銀幣面額，問你有幾種方式可以凑出金錢

int count_coins(int money){
    int dp[money+1] = {0};
    dp[0] =1;
    int coins[4] = {1,5,10,50};
    for (int i=0;i<4;i++){
        int coin = coins[i];
        for (int j=coin;j<=money;j++){
            dp[j]+=dp[j-coin];
        }
    }
    return dp[money];
}