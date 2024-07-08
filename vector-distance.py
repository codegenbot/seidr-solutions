def vector_distance(v1, v2):
    if len(v1) != len(v2):
        raise ValueError("Input vectors must have the same dimension")
    return sum(x * y for x, y in zip(v1, v2))