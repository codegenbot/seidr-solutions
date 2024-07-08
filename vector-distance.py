def vector_distance(v1, v2):
    return np.sqrt(((np.abs(v1) - np.abs(v2))**2).sum())