def vector_distance(vec1, vec2):
    import numpy as np

    return np.linalg.norm(np.array(vec1) - np.array(vec2))