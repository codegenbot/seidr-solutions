def solve_boolean(expression):
    stack = []
    parsing = True
    for char in expression:
        if char in ['T', 'F']:
            if not parsing:
                return eval(''.join(map(str, stack)))
            stack.append(char)
        stack.append(char) if char in ['|', '&'] else parsing = (char == '|')
    return eval(''.join(map(str, stack)))