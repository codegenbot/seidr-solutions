def paired_digits(digits): 
    total = 0
    for i in range(len(digits) - 2):
        if str(digits[i]) == str(digits[i+2]):
            total += int(str(digits[i]))
    return str(total)