import sys
input = sys.stdin.readline

dic = {
    1: 1, 
    2: 1, 
    3: 2, 
    4: 3, 
    5: 5
    }


def Fibo(N):
  if dic.get(N):
    return dic[N]
  else:
    if N % 2 == 1:
      dic[N] = (Fibo(N // 2) ** 2 + Fibo(N // 2 + 1) ** 2) % 1000000000
    else:
      dic[N] = (Fibo(N + 1) - Fibo(N - 1)) % 1000000000
    return dic[N]


A, B = map(int, input().split())
print((Fibo(B + 2) - Fibo(A + 1)) % 1000000000)