import re

T = int(input())
for i in range(T):
    N = input()
    X = re.compile('(100+1+|01)+')
    if X.fullmatch(N):
        print("YES")
    else:
        print("NO")