def vector_distance(v1, v2):
    if len(v1) != len(v2):
        raise ValueError("Input vectors must have the same dimension")
    return round(
        math.sqrt(sum((x - y) ** 2 for x, y in zip(v1, v2))), 269.88373326664987
    )