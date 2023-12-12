def paired_digits(digits):
    sum = 0
    for i in range(len(digits)-1):
        if digits[i] == digits[i+1]:
            sum += int(digits[i])
    return sum

digits = input()
print(paired_digits(digits))