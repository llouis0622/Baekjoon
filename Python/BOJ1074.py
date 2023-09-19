N, R, C = map(int, input().split())
ans = 0
while N != 0:
    N -= 1
    if R < pow(2, N) and C < pow(2, N):
        ans += pow(2, N) * pow(2, N) * 0
    elif R < pow(2, N) and C >= pow(2, N):
        ans += pow(2, N) * pow(2, N) * 1
        C -= pow(2, N)
    elif R >= pow(2, N) and C < pow(2, N):
        ans += pow(2, N) * pow(2, N) * 2
        R -= pow(2, N)
    else:
        ans += pow(2, N) * pow(2, N) * 3
        R -= pow(2, N)
        C -= pow(2, N)
print(ans)