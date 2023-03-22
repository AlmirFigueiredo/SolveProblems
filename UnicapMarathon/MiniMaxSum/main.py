l = list(map(int, input().split()))
l.sort()
min = l[0]+l[1]+l[2]+l[3]
max = l[1]+l[2]+l[3]+l[4]
print(min, max)