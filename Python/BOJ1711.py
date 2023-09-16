import sys

input = sys.stdin.readline
N = int(input())
ans = 0
arr = [tuple(map(int, input().split())) for _ in range(N)]
for i in range(N - 2):
    for j in range(i + 1, N - 1):
        for k in range(j + 1, N):
            x, y, z = arr[i], arr[j], arr[k]
            A = (x[0] - y[0]) * (x[0] - y[0]) + (x[1] - y[1]) * (x[1] - y[1])
            B = (y[0] - z[0]) * (y[0] - z[0]) + (y[1] - z[1]) * (y[1] - z[1])
            C = (z[0] - x[0]) * (z[0] - x[0]) + (z[1] - x[1]) * (z[1] - x[1])
            if max(A, B, C) * 2 == A + B + C:
                ans += 1
print(ans)