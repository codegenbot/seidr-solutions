def paired_digits(s):
    return sum(int(d) for i, d in enumerate(s) if i > 0 and (d == s[i - 1] or (s[i - 1] == "0" and d == "0") or ((i+1)%2==0 and int(d) + int(s[i-1]) >=10)))