n = int(input())
vec1 = list(map(float, input().split()))
n = int(input())
vec2 = list(map(float, input().split()))

dist = sum((a - b) ** 2 for a, b in zip(vec1, vec2)) ** 0.5
print(dist)