[PYTHON]
def vector_distance(v1, v2):
    return np.linalg.distance(v1, v2)
[/PYTHON]
[TESTS]
# Test case 1:
assert vector_distance([1, 2], [4, 6]) == 5
# Test case 2:
assert vector_distance([-1, 0], [1, 2]) == 3
# Test case 3:
assert vector_distance([2, 3, 4], [6, 7, 8]) == 5
# Test case 4:
assert vector_distance([1, 2, 3], [4, 5, 6]) == 5
# Test case 5:
assert vector_distance([1, 1, 1], [2, 3, 4]) == 3
[/TESTS]
