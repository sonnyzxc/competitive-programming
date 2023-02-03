import math
from itertools import combinations

for x in range(int(input())):
    area = []
    a = int(input())
    l = [int(d) for d in input().split()]
    
    b = list(combinations(l,2))
    for y in b:
        p1 = y[1]-y[0]
        p2 = math.sqrt(1 + y[0]**2)
        p3 = math.sqrt(1 + y[1]**2)
        sp = (p1 + p2 + p3)/2
        area.append(round((sp * (sp-p1) * (sp-p2) * (sp-p3)),5))
    na = set(area)
    print(len(na))

