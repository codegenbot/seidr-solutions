Here is the solution in Python:

def solve_boolean(input):
    if input == 'T':
        return True
    elif input == 'F':
        return False
    elif len(input) > 1:
        op = input[0]
        operand1 = input[1]
        operand2 = input[3:]
        if op == '&':
            return solve_boolean(operand1) and solve_boolean(operand2)
        else:
            return solve_boolean(operand1) or solve_boolean(operand2)
    else:
        raise ValueError("Invalid input")