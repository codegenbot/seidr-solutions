n = int(input())
vector1 = [float(x) for x in input().split()]
m = n
vector2 = [float(x) for x in input().split()]

distance = sum((a - b) ** 2 for a, b in zip(vector1[:m], vector2[:m])) ** 0.5

print(round(distance, 6))