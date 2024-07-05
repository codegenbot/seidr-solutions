def get_middle(s):
    if len(s) % 2 == 0:
        # Even length, return two middle characters as a string
        return s[len(s) // 2 - 1 : len(s) // 2 + 1]
    else:
        # Odd length, return the middle character as a string
        return s[len(s) // 2]