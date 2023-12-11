def calculate_distance(v1, v2):
    return math.sqrt(sum((x - y)**2 for x, y in zip(v1, v2)))