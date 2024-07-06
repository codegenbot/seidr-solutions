def get_middle(s):
    if len(s) % 2 == 0:  # if input is even length
        return "".join(c for c in s if c.isalnum())[len(s) // 2 - 1 : len(s) // 2 + 1]
    else:  # if input is odd length
        return "".join(c for c in s if c.isalnum())[len(s) // 2]