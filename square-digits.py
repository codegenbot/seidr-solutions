import re
def square_digits(n):
    return "".join(str(int(i) ** 2) for i in re.sub('[^0-9]', '', str(abs(int(n)))))