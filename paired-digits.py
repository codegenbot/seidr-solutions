def paired_digits(s):
    return sum(int(d) for d in s if d == s[1] if (s := s[1:]).startswith(d))