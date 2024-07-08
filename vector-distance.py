def vector_distance(v1, v2):
    if len(v1) != len(v2):
        raise ValueError("Input vectors must have the same dimension")
    distance = math.sqrt(sum((x - y) ** 2 for x, y in zip(v1, v2)))
    return round(distance, 8)  # or any desired number of decimal places