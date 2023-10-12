from collections import deque

T = int(input())
for _ in range(T):
    S = input()
    N = int(input())
    lst = deque(input()[1:-1].split(','))
    fg = 0
    if N == 0:  
        lst = []
    for i in S:
        if i == 'R':
            fg += 1
        elif i == 'D':
            if len(lst) == 0:
                print('error')
                break
            else:
                if fg % 2 == 1:
                    lst.pop()
                else:
                    lst.popleft()
    else:
        if fg % 2 == 1:
            lst.reverse()
        print('[' + ','.join(lst) + ']')