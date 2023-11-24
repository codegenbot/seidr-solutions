def solve_boolean(expression):
    stack = []
    for char in expression:
        if char == '|':
            stack.append(char)
        elif char == '&':
            stack.append(char)
        elif char == 'T':
            stack.append(True)
        elif char == 'F':
            stack.append(False)
        elif char == ')':
            while stack[-2] != '(':
                operator = stack.pop()
                operand2 = stack.pop()
                operand1 = stack.pop()
                if operator == '|':
                    stack.append(operand1 or operand2)
                elif operator == '&':
                    stack.append(operand1 and operand2)
            stack.pop()  # Remove the '('
    return stack[0]