n = int(input())
v1 = [float(x) for x in input().split()]
m = int(input())
v2 = [float(x) for x in input().split()]

distance = sum((a - b) ** 2 for a, b in zip(v1, v2)) ** 0.5

print(distance)