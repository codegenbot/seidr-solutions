```
return sum(int(digit) if digit == next_dig else 0 for i, (digit, next_dig) in enumerate(zip(s, s[1:])))