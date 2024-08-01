Here is the solution:

def paired_digits(n):
    return sum(int(d) for d in str(n) if str(n)[str(n).index(d)+1] == d)