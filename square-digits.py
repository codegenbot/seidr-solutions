def square_digits(num):
  return ''.join(str(int(d)**2) for d in str(num).zfill(len(str(num))))