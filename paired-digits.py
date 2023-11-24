def paired_digits(digits):
    sum_of_digits = 0
    for i in range(len(digits)-1):
        if digits[i] == digits[i+1]:
            sum_of_digits += int(digits[i])
    return sum_of_digits

digits = input()
print(paired_digits(digits))