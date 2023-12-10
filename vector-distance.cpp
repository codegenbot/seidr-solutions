[PYTHON]
def vector_distance(v1, v2):
    # Calculate the Euclidean distance between two vectors in n-dimensional space
    return ((v1 - v2) ** 2).sum() ** 0.5
[/PYTHON]
[TESTS]
# Test case 1:
assert vector_distance([1, 2], [3, 4]) == 2.8284271247461903
# Test case 2:
assert vector_distance([-1, 2], [-3, 4]) == 5.656854249492381
[/TESTS]
