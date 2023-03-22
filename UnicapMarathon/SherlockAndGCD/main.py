import math;
t = int(input())
for i in range(t):
    n = int(input())
    gcd_total = n
    l = list(map(int, input().split()))
    gcd_total = l[0]
    for j in l:
        gcd_total = math.gcd(gcd_total, j)
    if gcd_total == 1:
        print("YES")
    else:
        print("NO")
