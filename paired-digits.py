def paired_digits(digits): 
    total = sum(int(digit) for i, digit in enumerate(digits) if i < len(digits)-1 and str(digit) == str(digits[i+1])) 
    return str(total)