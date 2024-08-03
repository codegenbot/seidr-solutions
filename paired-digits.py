Here is a Python function that solves this problem:

def paired_digits(n):
    total = 0
    for i in range(len(str(n)) - 1):
        if str(n)[i] == str(n)[i+1]:
            total += int(str(n)[i])
    return total