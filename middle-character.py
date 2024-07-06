def get_middle(s):
    if len(s) % 2 == 0:  # if input is even length
        return s[len(s) // 2 - 1 : len(s) // 2 + 1]
    else:  # if input is odd length
        return s[len(s) // 2]