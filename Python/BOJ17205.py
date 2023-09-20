N = int(input()) - 1
str = input()
ans = 0
for i in str:
    num = ord(i) - ord('a')
    if num > 0:
        ans += 26 * num * (26 ** N - 1) // 25 + num
    ans += 1
    N -= 1
print(ans)