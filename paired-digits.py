def paired_digits(s):
    total = 0
    first = s[0]
    for i in range(1, len(s)-1):  
        if s[i] == s[i+1]:  
            total += int(s[i]) * 2
    last = s[-1]
    if first == last:
        total += int(first) * 2
    else:
        total += int(last)
    return total