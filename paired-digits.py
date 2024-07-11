```
def paired_digits(digits):
    total = 0
    for i in range(len(str(digits))):
        if i == len(str(digits)) - 1 or str(digits)[i] == str(digits)[i + 1]:
            total += int(str(digits)[i])
    return str(total)