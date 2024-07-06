def get_middle(s):
    if len(s) % 2 == 0:
        return s[len(s) // 2 - 1 : len(s) // 2 + 1]
    else:
        return s.translate({ord(c): '' for c in string.punctuation})[len(s) // 2]