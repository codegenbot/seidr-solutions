n = int(input())
v1 = list(map(float, input().split()))
v2 = list(map(float, input().split()))

distance = sum((a - b) ** 2 for a, b in zip(v1, v2)) ** 0.5

print(round(distance, 10))