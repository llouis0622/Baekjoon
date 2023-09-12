import sys

input = sys.stdin.readline
N = int(input())
arr = list(map(int, input().split()))
if N == 1:
    print(sum(arr) - max(arr))
else:
    arr = [min(arr[0], arr[5]), min(arr[1], arr[4]), min(arr[2], arr[3])]
    arr.sort()
    print(((arr[0] + arr[1]) * (N - 1) * 4) + ((arr[0] + arr[1]) * (N - 2) * 4) + ((arr[0] + arr[1] + arr[2]) * 4) + ((arr[0]) * (N - 2) * 4) + (arr[0] * (N - 2) * (N - 2) * 5))