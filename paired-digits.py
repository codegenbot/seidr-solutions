def paired_digits(s):
    total = 0
    prev_odd = True if s[0].isdigit() % 2 else False 
    for i in range(1, len(s)):
        if s[i].isdigit() == s[i-1].isdigit():
            total += int(s[i]) * (1 if s[i].isdigit() % 2 == prev_odd else 2) 
        prev_odd = not prev_odd
    return total