def solve_boolean(expression):
    return eval(expression.replace("T", "True").replace("F", "False"))  # Use 'T' and 'F' instead of 't' and 'f'

input_exp = input()
print(solve_boolean(input_exp))