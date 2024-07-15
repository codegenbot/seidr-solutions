```
n = int(input())
vec1 = [float(i) for i in input().split()]
vec2 = [float(i) for i in input().split()]

total_distance = 0
distance = 0

for a, b in zip(vec1, vec2):
    distance_squared = (a - b) ** 2
    total_distance += distance_squared
    distance = 0

print(round(total_distance ** 0.5, 10))