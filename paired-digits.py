```
def paired_digits(s):
    total_sum = 0
    i = 0
    while i < len(s) - 1:
        if s[i] == s[i+1]:
            total_sum += int(s[i]) * 2
            j = i + 1
            while j < len(s) and s[j] == s[i]:
                j += 1
            i = j - 1
        else:
            i += 1
    return total_sum