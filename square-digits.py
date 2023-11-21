def square_digits(n):
    return "".join(str(int(d)**2) for d in str(n)).rstrip('0') if n != 0 else "0"