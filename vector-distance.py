def vector_distance(v1, v2):
    if len(v1) != len(v2):
        raise ValueError("Input vectors must be of the same length")
    return np.linalg.norm(np.array(v1) - np.array(v2))