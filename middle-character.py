def get_middle_character(s):
    if len(s) % 2 == 0:
        return s[len(s)//2-1:len(s)//2+1]
    else:
        return s[len(s)//2]

# Test cases
assert get_middle_character("Q") == "Q"
assert get_middle_character("") == ""
assert get_middle_character("E9") == "E9"
assert get_middle_character(")b") == ")b"