n = int(input())
vector1 = list(map(float, input().split()))
m = int(input())
vector2 = list(map(float, input().split()))

distance = sum((a - b) ** 2 for a, b in zip(vector1, vector2)) ** 0.5
print("%.6f" % distance)