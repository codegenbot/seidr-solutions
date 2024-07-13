n = int(input())
vec1 = list(map(float, input().split()))
n = int(input())
vec2 = list(map(float, input().split()))

distance = math.sqrt(sum((x - y) ** 2 for x, y in zip(vec1, vec2)))
print(distance)