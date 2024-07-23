def solve_boolean(expression):
    stack = []
    operator = ''
    for char in expression:
        if char in {'T', 'F'}:
            while operator == '|':
                stack.append(eval(f'({stack.pop()} {operator} {char})'))
                operator = '&'
            stack.append(char)
            operator = ''
        elif char in {'&', '|'}:
            operator = char
    return 'T' if stack[-1] else 'F'