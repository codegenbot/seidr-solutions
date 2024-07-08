def paired_digits(s):
    return sum(
        int(digit)
        for i in range(len(s))
        if i+1 < len(s) and s[i] == s[i+1]
    )