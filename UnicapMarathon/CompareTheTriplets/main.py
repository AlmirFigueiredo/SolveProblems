t1 = list(map(int, input().split()))
t2 = list(map(int, input().split()))
resA = resB = 0
for i in range(0,3):
    if(t1[i] > t2[i]):
        resA += 1
    elif t1[i] < t2[i]:
        resB += 1
    else:
        continue
print(resA, resB)