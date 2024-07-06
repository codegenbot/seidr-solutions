
def paired_digits(s):
    total = 0
    for i in range(len(s)):
        if s[i] == s[i - 1] and s[i] != s[i + 1]:
            total += int(s[i])
    return total
