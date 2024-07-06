def get_middle(s):
    if len(s) % 2 == 0:
        return f"{s[len(s) // 2 - 1 : len(s) // 2 + 2]}"
    else:
        return f"{s[len(s) // 2]}"