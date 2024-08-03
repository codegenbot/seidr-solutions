Here is the solution:

def paired_digits(digits):
    return sum(int(d) for d in digits if d == next_digits(d))

def next_digits(s):
    for d in s:
        yield d
        if len(s) > 1 and d == s[0]:
            break
    else:
        raise ValueError("Input string must not be empty")

print(paired_digits(input()))