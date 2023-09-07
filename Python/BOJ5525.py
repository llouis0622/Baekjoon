N = int(input())
M = int(input())
arr = input()
ans, cnt, i = 0, 0, 0
while i < (M - 1):
    if arr[i:i + 3] == 'IOI':
        i += 2
        cnt += 1
        if cnt == N:
            ans += 1
            cnt -= 1
    else:
        i += 1
        cnt = 0
print(ans)