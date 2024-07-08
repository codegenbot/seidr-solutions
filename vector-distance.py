    def vector_distance(v1, v2):
        if len(v1) != len(v2):
            raise ValueError("Input vectors must have the same dimension")
        return math.sqrt(sum((x - y) ** 2 for x, y in zip(v1, v2)))

Alternatively, you can use the `scipy.spatial.distance` module to calculate the Euclidean distance between two n-dimensional vectors:

from scipy.spatial.distance import euclidean

def vector_distance(v1, v2):
    return euclidean(v1, v2)