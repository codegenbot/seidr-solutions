n = int(input())
v1 = [float(i) for i in input().split()]
n = int(input())
v2 = [float(i) for i in input().split()]


def vector_distance(v1, v2):
    return sum((a - b) ** 2 for a, b in zip(v1, v2)) ** 0.5


print(vector_distance(v1, v2))