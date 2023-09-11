from math import *

x1, y1, r1, x2, y2, r2 = map(float, input().split())
if pow(x2 - x1, 2) + pow(y2 - y1, 2) >= pow(r1 + r2, 2):
    print('0.000')
else:
    D = dist((x1, y1), (x2, y2))
    if min(r1, r2) + D <= max(r1, r2):
        R = min(r1, r2)
        num = pi * pow(R, 2)
    else:
        idx1 = 2 * acos((pow(r1, 2) + pow(D, 2) - pow(r2, 2)) / (2 * D * r1))
        idx2 = 2 * acos((pow(r2, 2) + pow(D, 2) - pow(r1, 2)) / (2 * D * r2))
        num = pow(r1, 2) * (idx1 - sin(idx1)) / 2 + pow(r2, 2) * (idx2 - sin(idx2)) / 2
    print(f'{round(num, 3):.3f}')