def paired_digits(s):
    total = 0
    last_digit = None
    for char in s:
        if char == str(last_digit):  
            total += int(char) * 2
        last_digit = char
    return total

s = input("Enter a string of digits: ")
print(paired_digits(s))