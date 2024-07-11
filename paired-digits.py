def paired_digits(s):
    return sum(int(digit) for i, digit in enumerate(s) for j in range(i+1,len(s)) if s[i] == s[j])