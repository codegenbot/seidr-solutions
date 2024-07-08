def vector_distance(v1, v2):
    if len(v1) != len(v2):
        raise ValueError("Input vectors must have the same dimension")
    v1 = [float(x) for x in v1]
    v2 = [float(y) for y in v2]
    return math.sqrt(sum((x - y) ** 2 for x, y in zip(v1, v2)))