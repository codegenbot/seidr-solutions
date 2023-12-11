def get_euclidean_distance(vector_a, vector_b):
    return math.sqrt(sum((x - y)**2 for x, y in zip(vector_a, vector_b)))