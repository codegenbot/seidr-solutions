```
def solve_boolean(expression):
    stack = []
    operator_stack = []

    def evaluate(expression):
        nonlocal stack
        nonlocal operator_stack
        
        if expression == 'T':
            stack.append(True)
        elif expression == 'F':
            stack.append(False)

        if expression[0] == '(':
            return evaluate(expression[1:-1])

        for char in expression:
            if char.upper() == 'T':
                stack.append(True)
            elif char.upper() == 'F':
                stack.append(False)
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
            else:
                operator_stack.append(char)

        while operator_stack:
            operand2 = stack.pop()
            operand1 = stack.pop()
            if operator_stack[-1] == '&':
                stack.append(operand1 and operand2)
            elif operator_stack[-1] == '|':
                stack.append(operand1 or operand2)
            operator_stack.pop()

        return stack[0]

    return evaluate(expression)