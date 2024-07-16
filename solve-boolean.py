def solve_boolean(expression):
    def bool_func(a, b, op):
        if op == '&':
            return a and b
        elif op == '|':
            return a or b
        else:
            raise ValueError("Invalid operator")

    stack = []
    for char in expression[::-1]:
        if char in {'T', 't'}:
            stack.append(True)
        elif char in {'F', 'f'}:
            stack.append(False)
        elif char in {'&', '|'}:
            b, a = stack.pop(), stack.pop()
            stack.append(bool_func(a, b, char))
    return stack[0]