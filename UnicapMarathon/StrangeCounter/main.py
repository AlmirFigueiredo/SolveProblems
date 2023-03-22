n = int(input())
time = 1
value = 3
pg_factor = 3
while time<=n:
    value *= 2
    time += pg_factor
    pg_factor *= 2

if time != n:
    time = (time-2)/2
    value = (value/2)-(n-time)

print(int(value))