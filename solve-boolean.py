def solve_boolean(expression):
    stack = []
    parsing = True
    for char in expression:
        if char in ['T', 'F']:
            if not parsing:
                return eval(''.join(map(str, stack)))
            stack.append(char)
        elif char == '|':
            parsing = False
        elif char == '&':
            continue
    return eval(''.join(map(str, stack)))