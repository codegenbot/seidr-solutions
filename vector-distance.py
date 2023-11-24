import math

n = int(input())
vector1 = list(map(float, input().split()))
m = int(input())
vector2 = list(map(float, input().split()))

distance = math.sqrt(sum([(vector1[i] - vector2[i]) ** 2 for i in range(n)]))
print(distance)