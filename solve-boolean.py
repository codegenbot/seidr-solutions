```
def solve_boolean(expression):
    stack = []
    operator_stack = []

    for char in expression:
        if char.upper() == 'T':
            stack.append(True)
        elif char.upper() == 'F':
            stack.append(False)
        elif char in ['&', '|']:
            while (operator_stack and
                   ((operator_stack[-1] == '&' and char == '|') or
                    (operator_stack[-1] == '|' and char == '&'))):
                operand2 = stack.pop()
                operand1 = stack.pop()
                if operator_stack[-1] == '&':
                    stack.append(operand1 and operand2)
                elif operator_stack[-1] == '|':
                    stack.append(operand1 or operand2)
                operator_stack.pop()
            operator_stack.append(char)
        elif char == '(':
            operator_stack.append(char)
        elif char == ')':
            while operator_stack[-1] != '(':
                operand2 = stack.pop()
                operand1 = stack.pop()
                if operator_stack[-1] == '&':
                    stack.append(operand1 and operand2)
                elif operator_stack[-1] == '|':
                    stack.append(operand1 or operand2)
                operator_stack.pop()
            operator_stack.pop()  # Remove '('

    while operator_stack:
        operand2 = stack.pop()
        operand1 = stack.pop()
        if operator_stack[-1] == '&':
            stack.append(operand1 and operand2)
        elif operator_stack[-1] == '|':
            stack.append(operand1 or operand2)
        operator_stack.pop()

    return stack[0]