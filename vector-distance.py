def vector_distance(vector1, vector2):
    return math.sqrt(sum((x - y) ** 2 for x, y in zip(vector1, vector2)))