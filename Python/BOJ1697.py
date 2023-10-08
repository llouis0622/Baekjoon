from collections import deque


def BFS(N, K):
    visited = [False] * 100001
    q = deque([(N, 0)])
    while q:
        idx, t = q.popleft()
        if idx == K:
            return t
        for i in (idx - 1, idx + 1, 2 * idx):
            if 0 <= i <= 100000 and not visited[i]:
                visited[i] = True
                q.append((i, t + 1))


N, K = map(int, input().split())
print(BFS(N, K))