[PYTHON]
def vector_distance(v1: list, v2: list) -> float:
    """
    Calculate the Euclidean distance between two vectors.

    :param v1: A list of floats representing the first vector.
    :param v2: A list of floats representing the second vector.
    :return: The Euclidean distance between the two vectors.
    """
    return sqrt(sum((x - y) ** 2 for x, y in zip(v1, v2)))
[/PYTHON]
[TESTS]
# Test case 1:
assert vector_distance([1, 2, 3], [4, 5, 6]) == 5.0
# Test case 2:
assert vector_distance([-1, -2, -3], [-4, -5, -6]) == 5.0
# Test case 3:
assert vector_distance([1, 2, 3], [-4, -5, -6]) == 5.0
[/TESTS]
