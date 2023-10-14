N = int(input())
dp = [0, 1]
MOD = 1000000
p = MOD // 10 * 15
for i in range(2, p):
    dp.append(dp[i - 1] + dp[i - 2])
    dp[i] %= 1000000
print(dp[N % p])