def solve_boolean(expression):
    stack = []
    for char in expression:
        if char == '&':
            second_operand = stack.pop()
            first_operand = stack.pop()
            result = False
            if first_operand and second_operand: 
                result = True
            stack.append(result)
        elif char == '|':
            second_operand = stack.pop()
            first_operand = stack.pop()
            result = False
            if first_operand or second_operand:
                result = True
            stack.append(result)
        else:
            stack.append(char == 't')
    return stack[0]