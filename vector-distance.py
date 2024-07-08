def vector_distance(v1, v2):
    return np.round(np.sqrt(((v1 - v2) ** 2).sum()), 8)