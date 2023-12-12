def get_distance(vec1, vec2):
    return math.sqrt(sum((a - b)**2 for a, b in zip(vec1, vec2)))