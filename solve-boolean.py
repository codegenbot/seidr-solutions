def solve_boolean(expression):
    stack = []
    operator_stack = []
    evaluate_expression = False
    for char in expression:
        if char in ['T', 'F']:
            stack.append(char)
            evaluate_expression = True
        elif char in ['|', '&']:
            while len(operator_stack) and (operator_stack[-1] in ['|', '&']):
                a = stack.pop() == 'T'
                b = stack.pop() == 'T'
                if operator_stack[-1] == '&':
                    stack.append(a and b)
                else:
                    stack.append(a or b)
                operator_stack.pop()
            operator_stack.append(char)
            evaluate_expression = True
        else:
            if not evaluate_expression:
                break
    while len(operator_stack):
        a = stack.pop() == 'T'
        b = stack.pop() == 'T'
        if operator_stack[-1] == '&':
            stack.append(a and b)
        else:
            stack.append(a or b)
        operator_stack.pop()
    return stack.pop() == 'T' if stack else None