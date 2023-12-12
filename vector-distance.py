[PYTHON]
from math import sqrt

def get_distance(vector1, vector2):
    return sqrt(sum((x-y)**2 for x, y in zip(vector1, vector2)))
[/PYTHON]
[TESTS]
# Test case 1:
assert get_distance([1, 2, 3], [4, 6, 8]) == 5.0
# Test case 2:
assert get_distance([-1, 0, 1], [2, 3, 4]) == 5.0
# Test case 3:
assert get_distance([], []) == 0.0
# Test case 4:
assert get_distance([1, 2, 3], []) == 0.0
# Test case 5:
assert get_distance([], [1, 2, 3]) == 0.0
[/TESTS]
