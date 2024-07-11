n = int(input())
vec1 = list(map(float, input().split()))
n = int(input())
vec2 = list(map(float, input().split()))

dist = math.sqrt(sum((v1 - v2) ** 2 for v1, v2 in zip(vec1, vec2)))
print(dist)