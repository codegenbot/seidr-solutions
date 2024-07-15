```
n = int(input())
vec1 = [float(i) for i in input().split()]
vec2 = [float(i) for i in input().split()]

total_distance = sum((a - b)**2 for a, b in zip(vec1, vec2))**0.5
print(round(total_distance, 10))