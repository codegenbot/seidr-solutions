n = int(input())
vector1 = list(map(float, input().split()))
n = int(input())
vector2 = list(map(float, input().split()))

distance = sum((v1 - v2)**2 for v1, v2 in zip(vector1, vector2)) ** 0.5
print(distance)