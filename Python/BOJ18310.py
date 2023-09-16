N = int(input())
vec = list(map(int, input().split()))
vec.sort()
print(vec[(N - 1) // 2])