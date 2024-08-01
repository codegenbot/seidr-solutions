```
def solve_boolean(expression):
    def evaluate_expression(expression):
        stack = []
        for char in expression[::-1]:
            if char == '&':
                right = stack.pop()
                left = stack.pop()
                stack.append(left and right)
            elif char == '|':
                right = stack.pop()
                left = stack.pop()
                stack.append(left or right)
            else:
                stack.append(char == 'T')
        return stack[0]

    return str(evaluate_expression(expression)).lower()