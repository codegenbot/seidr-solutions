def solve_boolean(expression):
    stack = []
    for char in expression[::-1]:
        if char in ['T', 'F']:
            stack.append(char == 'T')
        elif char in ['|', '&']:
            second_operand = stack.pop()
            first_operand = stack.pop()
            if char == '|':
                stack.append(first_operand or second_operand)
            else:
                stack.append(first_operand and second_operand)
    return stack[0]