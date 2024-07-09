def paired_digits(s):
    total = 0
    for i in range(len(s)):
        for j in range(i+1, len(s)):
            if s[i] == s[j]:
                total += int(s[i])
                break
    return total