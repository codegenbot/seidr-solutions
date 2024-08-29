n = int(input())
vec1 = list(map(float, input().split()))
vec2 = list(map(float, input().split()))

distance = sum((a - b) ** 2 for a, b in zip(vec1, vec2)) ** 0.5

print("{:.6f}".format(distance))