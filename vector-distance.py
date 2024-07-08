n = int(input())
vec1 = [float(x) for x in input().split()]
n2 = int(input())
vec2 = [float(x) for x in input().split()]


def vector_distance(n, vec1, vec2):
    return math.sqrt(sum((a - b) ** 2 for a, b in zip(vec1, vec2)))


print(vector_distance(n, vec1, vec2))