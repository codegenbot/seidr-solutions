def solve_boolean(expression):
    def evaluate(expression):
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

    if expression in ['t', 'T']:
        return True
    elif expression in ['f', 'F']:
        return False
    else:
        return evaluate(expression)