def paired_digits(s):
    freq = {}
    for c in s:
        if c in freq:
            freq[c] += 1
        else:
            freq[c] = 1

    return sum(val * int(c) for c, val in freq.items() if val > 0)