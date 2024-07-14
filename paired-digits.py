def paired_digits(n):
    n = str(n)
    return sum(int(i) for i in n if n[n.index(i) + 1] == i)