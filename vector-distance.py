n = int(input())
vector1 = list(map(float, input().split()))
n = int(input())
vector2 = list(map(float, input().split()))

distance = math.sqrt(sum((v1 - v2) ** 2 for v1, v2 in zip(vector1, vector2)))
print(distance)