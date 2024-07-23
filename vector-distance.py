n = int(input())
vector1 = [float(i) for i in input().split()]
m = int(input())
vector2 = [float(i) for i in input().split()]

distance = sum((a - b) ** 2 for a, b in zip(vector1, vector2)) ** 0.5

print(distance)