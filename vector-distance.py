[PYTHON]
def get_euclidean_distance(vector_1, vector_2):
    return np.linalg.norm(np.array(vector_1) - np.array(vector_2))
[/PYTHON]
[TESTS]
# Test case 1:
assert get_euclidean_distance([1, 2, 3], [4, 5, 6]) == 5.385164807134504
# Test case 2:
assert get_euclidean_distance([-1, -2, -3], [-4, -5, -6]) == 5.385164807134504
# Test case 3:
assert get_euclidean_distance([1, 2, 3], [-4, -5, -6]) == 10.970329614269009
[/TESTS]
