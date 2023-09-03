from math import factorial


def num(N, R):
    if R > N:
        return 0
    else:
        return factorial(N) // factorial(R) // factorial(N - R)
    
            
N, K, M = map(int, input().split())
ans = 1
while N > 0:
    ans = ans * num(N % M, K % M) % M
    N //= M
    K //= M
print(ans)