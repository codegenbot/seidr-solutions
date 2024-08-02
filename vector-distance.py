n = int(input())
vector1 = list(map(float, input().split()))
n = int(input())
vector2 = list(map(float, input().split()))

euclidean_distance = math.sqrt(sum((x - y) ** 2 for x, y in zip(vector1, vector2)))
print(euclidean_distance)