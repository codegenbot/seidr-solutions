```
def solve_boolean(expression):
    stack = []
    evaluate_expression = False
    for char in expression:
        if char in ['T', 'F']:
            stack.append(char)
            evaluate_expression = True
        elif char in ['|', '&']:
            while len(stack) >= 2 and stack[-1] == '&' and (char == '|' or stack[-2] == '|'):
                a = stack.pop() == 'T'
                b = stack.pop() == 'T'
                stack.append(a and b)
            if evaluate_expression:
                stack.append(char)
                evaluate_expression = False
        else:
            if not evaluate_expression:
                break
    return stack.pop() == 'T' if stack else None