def libraryFine(d1, m1, y1, d2, m2, y2):
    if d1 <= d2 and m1 <= m2 and y1 <= y2 or (y1<y2) or (y1==y2) and m1<m2:
        return 0
    elif(y1==y2 and m1==m2):
        return 15*(d1-d2)
    elif y1==y2:
        return 500*(m1-m2)
    else:
        return 10000
l1 = list(map(int, input().split()))
l2 = list(map(int, input().split()))
d1 = l1[0]
m1 = l1[1]
y1 = l1[2]
d2 = l2[0]
m2 = l2[1]
y2 = l2[2]
ans = str(libraryFine(d1, m1, y1, d2, m2, y2))
print(ans)
