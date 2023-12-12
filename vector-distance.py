[PYTHON]
def get_euclidean_distance(v1, v2):
    return math.sqrt(sum((x1 - x2) ** 2 for x1, x2 in zip(v1, v2)))
[/PYTHON]
[TESTS]
# Test case 1:
assert get_euclidean_distance([1, 2, 3], [4, 5, 6]) == 5.385164807134504
# Test case 2:
assert get_euclidean_distance([-1, -2, -3], [-4, -5, -6]) == 5.385164807134504
# Test case 3:
assert get_euclidean_distance([1, 2, 3], [-4, -5, -6]) == 10.970329614269009
[/TESTS]
