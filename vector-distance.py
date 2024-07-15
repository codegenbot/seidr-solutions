```
n = int(input())
vec1 = [float(i) for i in input().split()]
vec2 = [float(i) for i in input().split()]

total_distance = 0
for a, b in zip(vec1, vec2):
    total_distance += (a - b) ** 2
distance = (total_distance + 1e-9) ** 0.5

print(round(distance, 10))