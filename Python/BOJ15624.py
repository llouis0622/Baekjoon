def DP(N):
    x, y = 0, 1
    for i in range(N):
        x, y = y % 1000000007, (x + y) % 1000000007
    return x


print(DP(int(input())))