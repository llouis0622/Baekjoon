def paper_cnt(N, paper, x, y):
    global white, blue
    color = paper[y][x]
    same = True
    for i in range(y, y + N):
        if not same:
            break
        for j in range(x, x + N):
            if paper[i][j] != color:
                same = False
                break
    if same:
        if color == 0:
            white += 1
        else:
            blue += 1
    else:
        nN = N // 2
        paper_cnt(nN, paper, x, y)
        paper_cnt(nN, paper, x + nN, y)
        paper_cnt(nN, paper, x, y + nN)
        paper_cnt(nN, paper, x + nN, y + nN)


N = int(input())
paper = [list(map(int, input().split())) for _ in range(N)]
white = blue =  0
paper_cnt(N, paper, 0, 0)
print(white, blue, end='')