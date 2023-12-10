def solve_boolean(expression):
    stack = []
    operators = {'&': lambda a, b: a and b, '|': lambda a, b: a or b}
    
    for char in expression:
        if char in 'TF':
            stack.append(char == 'T')
        elif char in '&|':
            if len(stack) < 2:
                return False
            operand2 = stack.pop()
            operand1 = stack.pop()
            result = operators[char](operand1, operand2)
            stack.append(result)
    
    if len(stack) != 1:
        return False
    
    return stack[0]