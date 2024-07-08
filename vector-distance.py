from itertools import zip_longest
def vector_distance(v1, v2):
    return math.sqrt(sum((x-y)**2 for x, y in zip_longest(v1, v2)))