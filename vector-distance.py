def vector_distance(v1, v2):
    if np.allclose(v1, 0) or np.allclose(v2, 0):
        return float("inf")
    else:
        return np.sqrt(((v1 - v2) ** 2).sum())