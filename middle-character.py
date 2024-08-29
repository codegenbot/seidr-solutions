def middle_character(s):
    s_len = len(s)
    half = s_len // 2

    if s_len % 2 == 1:
        return s[half]
    else:
        return s[half - 1 : half + 1]