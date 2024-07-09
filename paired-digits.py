import re

def paired_digits(s):
    return sum(int(digit) for digit in re.sub('[^0-9]', '', s) if len(re.findall(digit, re.sub('[^' + digit + ']', '', s))) > 1)