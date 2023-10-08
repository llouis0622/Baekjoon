from collections import deque

dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]


def BFS(box, tomato):
    day = -1
    q = deque(tomato)
    while q:
        day += 1
        for _ in range(len(q)):
            x, y = q.popleft()
            for i in range(4):
                nx, ny = x + dx[i], y + dy[i]
                if 0 <= nx < N and 0 <= ny < M and box[nx][ny] == 0:
                    box[nx][ny] = 1
                    q.append((nx, ny))
    return day


M, N = map(int, input().split())
box = [list(map(int, input().split())) for _ in range(N)]
tomato = [(i, j) for i in range(N) for j in range(M) if box[i][j] == 1]
day = BFS(box, tomato)
print(day if all(box[i][j] != 0 for i in range(N) for j in range(M)) else -1)