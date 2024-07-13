n = int(input())
v1 = list(map(float, input().split()))
v2 = list(map(float, input().split()))

distance = sum((x - y) ** 2 for x, y in zip(v1, v2)) ** 0.5

print(round(distance, 10))