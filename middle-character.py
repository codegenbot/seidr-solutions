def get_middle(s):
    if len(s) % 2 == 0:
        # Even number of characters, return two middle characters
        return s[len(s) // 2 - 1 : len(s) // 2 + 2]
    else:
        # Odd number of characters, return the middle character
        return s[len(s) // 2]