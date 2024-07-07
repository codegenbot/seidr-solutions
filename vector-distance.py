def vector_distance():
    n = int(input())
    v1 = list(map(float, input().split()))
    m = int(input())
    v2 = list(map(float, input().split()))

    return math.sqrt(sum((a - b) ** 2 for a, b in zip(v1, v2)))


print(vector_distance())