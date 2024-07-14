def paired_digits(s):
    return sum(int(digit) * 2 
               for i, digit in enumerate(s)
               if ((i < len(s) - 1 and int(digit) == int(s[i + 1])) or
                   (i == 0 and digit == s[-1]) or 
                   (i == len(s) - 1 and digit == s[0]))