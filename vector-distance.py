n = int(input())
vec1 = [float(x) for x in input().split()]
vec2 = [float(x) for x in input().split()]

distance = sum((a - b) ** 2 for a, b in zip(vec1, vec2)) ** 0.5
print("{:.9f}".format(distance))