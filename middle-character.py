def middle_character(s):
    s = s.strip()  # Remove leading and trailing whitespace
    if len(s) % 2 == 0:
        return s[
            len(s) // 2 - 1 : len(s) // 2 + 1
        ]  # Even length, return two middle characters
    else:
        return s[len(s) // 2]  # Odd length, return the single middle character