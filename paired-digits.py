def paired_digits(s):
    total_sum = 0
    prev_paired = False
    for c in s:
        if prev_paired and c == int(s[0]):  
            total_sum += int(c) * 2
        elif c == int(s[0]):  
            total_sum += int(c) * 2
        else:  
            prev_paired = False
    return total_sum