// 給定一連串的矩陣，找出最適合的括號方式,使整體的計算量最少


//核心邏輯
for k in range(i, j):
    cost = dp[i][k] + dp[k+1][j] + p[i-1]*p[k]*p[j]
    dp[i][j] = min(dp[i][j], cost)