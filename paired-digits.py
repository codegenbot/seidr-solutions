def paired_digits(string):
    sum = 0
    for i in range(len(string)-1):
        if string[i] == string[i+1]:
            sum += int(string[i])
    return sum