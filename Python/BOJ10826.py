def DP(N):
    x, y = 0, 1
    for i in range(N):
        x, y = y, x + y
    return x


print(DP(int(input())))