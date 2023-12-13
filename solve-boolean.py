def solve_boolean(expression):
    stack = []
    operators = {'&': lambda a, b: a and b, '|': lambda a, b: a or b}

    for char in expression.lower():
        if char in {'f', 't'}:
            stack.append(char)
        elif char in {'&', '|'}:
            op2 = stack.pop()
            op1 = stack.pop()
            result = operators[char](op1 == 't', op2 == 't')
            stack.append('t' if result else 'f')        

    return stack.pop() == 't'