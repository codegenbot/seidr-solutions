[PYTHON]
def vector_distance(v1, v2):
    return sqrt(sum((x-y)**2 for x, y in zip(v1, v2)))
[/PYTHON]
[TESTS]
# Test case 1:
assert vector_distance([1, 2, 3], [4, 5, 6]) == 5.0
# Test case 2:
assert vector_distance([-1, -2, -3], [-4, -5, -6]) == 5.0
# Test case 3:
assert vector_distance([1, 2, 3], [-4, -5, -6]) == 5.0
[/TESTS]
