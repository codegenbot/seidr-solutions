def get_middle(s):
    if len(s) % 2 == 0:
        # Even length, return middle two characters
        return s[len(s) // 2 - 1 : len(s) // 2 + 1]
    else:
        # Odd length, return middle character
        return s[len(s) // 2]