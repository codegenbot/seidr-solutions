def paired_digits(string):
    sum_digits = 0
    for i in range(len(string)-1):
        if string[i] == string[i+1]:
            sum_digits += int(string[i])
    return sum_digits

string = input()
print(paired_digits(string))