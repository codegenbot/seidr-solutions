n = int(input())
vector1 = [float(x) for x in input().split()]
n = int(input())
vector2 = [float(x) for x in input().split()]

distance = sum((a - b) ** 2 for a, b in zip(vector1, vector2)) ** 0.5

print("%.6f" % distance)