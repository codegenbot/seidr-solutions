import re

def square_digits(n):
    return ''.join(str(int(i) ** 2) for i in re.sub('\D', '', str(n)))