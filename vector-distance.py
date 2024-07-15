n = int(input())
v1 = [float(i) for i in input().split()]
v2 = [float(i) for i in input().split()]

distance = sum((a - b) ** 2 for a, b in zip(v1, v2)) ** 0.5

print("%.6f" % distance)