arr = [[0] * 31 for _ in range(31)]
for i in range(1, 31):
    arr[0][i] = 1
for i in range(1, 31):
    for j in range(i, 31):
        arr[i][j] += arr[i][j-1] + arr[i-1][j]
while True:
    N = int(input())
    if N == 0:
        break
    print(arr[N][N])