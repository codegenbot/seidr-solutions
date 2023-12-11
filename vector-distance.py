[PYTHON]
def get_euclidean_distance(vector_1, vector_2):
    return np.linalg.norm(np.array(vector_1) - np.array(vector_2))
[/PYTHON]
[TESTS]
# Test case 1:
assert get_euclidean_distance([1, 2, 3], [4, 5, 6]) == 5.0
# Test case 2:
assert get_euclidean_distance([-1, -2, -3], [-4, -5, -6]) == 5.0
# Test case 3:
assert get_euclidean_distance([0, 0, 0], [0, 0, 0]) == 0.0
# Test case 4:
assert get_euclidean_distance([1, 2, 3], [-4, -5, -6]) == 5.0
# Test case 5:
assert get_euclidean_distance([-1, -2, -3], [4, 5, 6]) == 5.0
[/TESTS]
