def paired_digits(digits): 
    total = 0
    for i in range(len(digits) - 1):
        if str(digits[i]) == str(digits[i+1]):
            total += int(str(digits[i]))
    # Add the last digit if it's the same as the second last
    if len(digits) > 1 and str(digits[-1]) == str(digits[-2]):
        total += int(str(digits[-1]))
    return str(total)