H, W = map(int, input().split())
vec = list(map(int, input().split()))
ans = 0
for i in range(1, W - 1):
    lm = max(vec[:i])
    rm = max(vec[i+1:])
    num = min(lm, rm)
    if vec[i] < num:
        ans += num - vec[i]
print(ans)