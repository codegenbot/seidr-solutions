def euclidean_distance(x, y):
    return math.sqrt(sum((a - b)**2 for a, b in zip(x, y)))