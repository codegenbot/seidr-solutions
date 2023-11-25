def evaluate_boolean(expression):
    stack = []
    for char in expression:
        if char == 'T' or char == 'F':
            stack.append(char)
        elif char == '|':
            operand2 = stack.pop()
            operand1 = stack.pop()
            stack.append(operand1 == 'T' or operand2 == 'T')
        elif char == '&':
            operand2 = stack.pop()
            operand1 = stack.pop()
            stack.append(operand1 == 'T' and operand2 == 'T')
    
    return stack.pop() == 'T'