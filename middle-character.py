def get_middle(s):
    if len(s) % 2 == 0:
        # Even number of characters, return two middle characters
        return s[len(s) // 2 - 1 : len(s) // 2 + 2]
    else:
        # Odd number of characters, return the middle character
        if ord(s[len(s) // 2]) < 128:
            # Middle character is in ASCII range, return it
            return s[len(s) // 2]
        else:
            # Middle character is not in ASCII range, return empty string
            return ''