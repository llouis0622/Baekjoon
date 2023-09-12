N, L = map(int, input().split())
for i in range(L, 101):
    idx = N - ((i + 1) * i / 2)
    if idx % i == 0:
        idx = int(idx / i)
        if idx >= -1:
            for j in range(1, i + 1):
                print(idx + j, end=' ')
            print()
            break
else:
    print(-1)