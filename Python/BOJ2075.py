import heapq

arr = []
N = int(input())
for _ in range(N):
    num = map(int, input().split())
    for i in num:
        if len(arr) < N:
            heapq.heappush(arr, i)
        else:
            if arr[0] < i:
                heapq.heappop(arr)
                heapq.heappush(arr, i)
print(arr[0])