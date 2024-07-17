def solve_boolean(s):
    s = s.lower()
    stack = []
    for c in reversed(s):
        if c in ['|', '&']:
            stack.append(c)
        elif c == 't':
            stack.append(True)
        elif c == 'f':
            stack.append(False)
        else:
            raise ValueError("Invalid input")
    result = None
    while stack:
        op = stack.pop()
        b2 = stack.pop()
        if op == '&':
            result = result and b2 if result is not None else b2
        elif op == '|':
            result = result or b2 if result is not None else b2
    return result