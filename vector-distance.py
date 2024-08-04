n = int(input())
vector1 = list(map(float, input().split()))
n = int(input())
vector2 = list(map(float, input().split()))

distance = 0
for i in range(len(vector1)):
    distance += (vector1[i] - vector2[i]) ** 2
distance = math.sqrt(distance)
print(distance)