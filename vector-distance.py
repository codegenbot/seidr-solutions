n = int(input())
vector1 = list(map(float, input().split()))
n = int(input())
vector2 = list(map(float, input().split()))

distance = math.sqrt(sum((x - y) ** 2 for x, y in zip(vector1, vector2)))
print(distance)