n = int(input())
vec1 = [float(i) for i in input().split()]
vec2 = [float(i) for i in input().split()]

total_distance = 0

for a, b in zip(vec1, vec2):
    distance = (a - b) ** 2
    total_distance += distance

distance = total_distance ** 0.5

print(round(distance, 10))