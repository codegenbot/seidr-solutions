import numpy as np
def vector_distance(v1, v2):
    if len(v1) != len(v2):
        raise ValueError("Input vectors must have the same dimension")
    return np.linalg.norm(np.subtract(v1, v2))