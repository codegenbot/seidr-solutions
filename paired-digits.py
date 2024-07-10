Here is the solution:

def paired_digits(input_str):
    return sum(int(x) for x in input_str if input_str[0] == '0' or x == input_str[1])