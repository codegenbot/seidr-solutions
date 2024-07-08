def vector_distance(v1, v2):
    v1, v2 = np.broadcast_arrays(v1, v2)
    return np.round(np.linalg.norm(v1 - v2), 12)