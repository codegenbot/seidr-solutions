[PYTHON]
def sum_paired_digits(s):
    return sum(int(c) for c in s if s[s.index(c)+1] == c or (s[-1] == c and len(s) > 1))
[/PYTHON]
[TESTS]
# Test case 1:
assert sum_paired_digits("") == 0
# Test case 2:
assert sum_paired_digits("224113") == 3
# Test case 3:
assert sum_paired_digits("44444") == 16
[/TESTS]
