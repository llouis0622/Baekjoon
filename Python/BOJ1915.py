X, Y = map(int, input().split())
arr = []
ans = 0
for _ in range(X):
    arr.append(list(map(int, list(input()))))
for i in range(X):
    for j in range(Y):
        if i > 0 and j > 0 and arr[i][j] == 1:
            arr[i][j] += min(arr[i][j - 1], arr[i - 1][j], arr[i - 1][j - 1])
        ans = max(ans, arr[i][j])
print(pow(ans, 2))