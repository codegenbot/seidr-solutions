n = int(input())
vector1 = list(map(float, input().split()))
m = int(input())
vector2 = list(map(float, input().split()))

distance = sum((x - y) ** 2 for x, y in zip(vector1, vector2)) ** 0.5
print(distance)