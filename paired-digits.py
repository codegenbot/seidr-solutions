def paired_digits(s):
    return sum(int(d1) for d1, d2 in ((s[i], s[i+1]) if i < len(s)-1 else (s[i],) for i in range(len(s))) 
              if str(d1).replace('0', '').strip() and d1 == int(str(d2)))