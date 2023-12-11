[PYTHON]
def sum_paired_digits(s):
    return sum(int(a) for a, b in zip(s, s[1:]) if a == b)
[/PYTHON]
[TESTS]
# Test case 1:
assert sum_paired_digits("224113") == 3
# Test case 2:
assert sum_paired_digits("44444") == 16
# Test case 3:
assert sum_paired_digits("112233") == 6
# Test case 4:
assert sum_paired_digits("123456") == 0
[/TESTS]
