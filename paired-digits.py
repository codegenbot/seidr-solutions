[PYTHON]
def sum_paired_digits(s):
    return sum(int(c) for c in s if s[s.index(c)+1] == c or (s[-1] == c and len(s) > 1))
[/PYTHON]
[TESTS]
# Test case 1:
assert sum_paired_digits("") == 0
# Test case 2:
assert sum_paired_digits("1") == 0
# Test case 3:
assert sum_paired_digits("11") == 2
# Test case 4:
assert sum_paired_digits("12") == 0
# Test case 5:
assert sum_paired_digits("123") == 0
# Test case 6:
assert sum_paired_digits("1234") == 0
# Test case 7:
assert sum_paired_digits("12345") == 0
# Test case 8:
assert sum_paired_digits("123456") == 0
# Test case 9:
assert sum_paired_digits("1234567") == 0
# Test case 10:
assert sum_paired_digits("12345678") == 0
[/TESTS]
