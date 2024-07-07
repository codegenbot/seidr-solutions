n = int(input())
v1 = list(map(float, input().split()))
n = int(input())
v2 = list(map(float, input().split()))


def vector_distance(v1, v2):
    return sum((x - y) ** 2 for x, y in zip(v1, v2)) ** 0.5


print(vector_distance(v1, v2))