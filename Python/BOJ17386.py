import sys

input = sys.stdin.readline
X1, Y1, X2, Y2 = map(int, input().split())
X3, Y3, X4, Y4 = map(int, input().split())


def CCW(A, B, C, D, E, F):
    return  A * D + C * F + E * B - C * B - E * D - A * F


N = CCW(X1, Y1, X2, Y2, X3, Y3) * CCW(X1, Y1, X2, Y2, X4, Y4)
M = CCW(X3, Y3, X4, Y4, X1, Y1) * CCW(X3, Y3, X4, Y4, X2, Y2)
print(1 if N < 0 and M < 0 else 0)