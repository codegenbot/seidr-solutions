def solve_boolean(expression):
    tokens = []
    stack = []
    for c in expression:
        if c == '(':
            stack.append(c)
        elif c == ')':
            while stack and stack[-1] != '(':
                tokens.append(stack.pop())
            stack.pop()  # Remove the '('
        elif c in 'TF|&':
            tokens.append(c)
        else:
            raise ValueError(f"Invalid character '{c}'")

    result = None
    while stack:
        left, op, right = stack.pop(), tokens.pop(), stack.pop()
        if op == '|':
            result = str(bool(solve_boolean(left)) or bool(solve_boolean(right)))
        elif op == '&&':
            result = str(bool(solve_boolean(left)) and bool(solve_boolean(right)))

    return eval(result)