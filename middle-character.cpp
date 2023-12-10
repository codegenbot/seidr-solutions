[PYTHON]
def middle_character(string):
    if len(string) % 2 == 0:
        return string[len(string) // 2 - 1:len(string) // 2 + 1]
    else:
        return string[len(string) // 2]
[/PYTHON]
[TESTS]
# Test case 1:
assert middle_character("abc") == "b"
# Test case 2:
assert middle_character("abcd") == "bc"
# Test case 3:
assert middle_character("abcde") == "c"
# Test case 4:
assert middle_character("abcd") == "bc"
[/TESTS]
