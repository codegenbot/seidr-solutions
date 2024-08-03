def solve_boolean(expression):
    def evaluate_expression(expression):
        stack = []
        for char in expression[::-1]:
            if char == '&':
                a = stack.pop()
                b = stack.pop()
                stack.append(a and b)
            elif char == '|':
                a = stack.pop()
                b = stack.pop()
                stack.append(a or b)
            else:
                stack.append(char == 'T')
        return stack[0]

    if not expression:  # Check for empty string
        return None

    expression = expression.strip()  # Remove leading and trailing spaces
    if expression[-1] in ['&', '|']:  # If the last character is an operator, add a default 'F'
        expression += 'F'

    return evaluate_expression(expression)