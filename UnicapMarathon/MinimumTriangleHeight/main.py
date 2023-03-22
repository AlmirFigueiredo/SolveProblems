import math
base,area = input().split(" ")
base = float(base)
area = float(area)
h = (2*area)/base
print(int(math.ceil(h)))