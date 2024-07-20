def solve_boolean(expression):
    def evaluate_expression(s):
        stack = []
        for char in s:
            if char in ['T', 'F']:
                stack.append(char)
            elif char in ['|', '&']:
                while len(stack) >= 2 and stack[-1] == '&' and (char == '|' or stack[-2] == '|'):
                    a = stack.pop() == 'T'
                    b = stack.pop() == 'T'
                    stack.append(a and b)
                if char == '&':
                    if stack:
                        stack.append(stack.pop() == 'T')
                    else:
                        break
                stack.append(char)
        return stack.pop() == 'T' if stack else None

    while '&' in expression or '|' in expression:
        start = 0
        end = len(expression) - 1
        for i, char in enumerate(expression):
            if char == '&':
                end = i - 1
                break
        left = expression[:end]
        right = expression[end + 1:]
        expression = str(evaluate_expression(left)) + '&' + str(evaluate_expression(right))

    return evaluate_expression(expression)