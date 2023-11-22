def paired_digits(string):
    return sum(int(string[i]) for i in range(len(string)-1) if string[i] == string[i+1])

input_string = input()
print(paired_digits(input_string))