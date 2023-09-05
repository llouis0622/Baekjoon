import sys


def rnd(num):
    return int(num) + 1 if num - int(num) >= 0.5 else int(num)

input = sys.stdin.readline
N = int(input())
if N:
    arr = [int(input()) for _ in range(N)]
    arr.sort()
    ans = rnd(N * 0.15)
    print(rnd(sum(arr[ans:-ans] if ans else arr) / (N - 2 * ans)))
else:
    print(0)