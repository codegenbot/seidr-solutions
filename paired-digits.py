'''def paired_digits(s):
    return sum(int(d) for i, d in enumerate(s) if i < len(s)-1 and (d == s[i+1] or d == s[i+2]))
    if len(s) > 0:
        result = 0
        for i in range(len(s) - 1):
            if s[i] == s[i+1]:
                result += int(s[i])
    return result'''