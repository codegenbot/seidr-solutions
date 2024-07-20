def solve_boolean(expression):
    stack = []
    parsing = True
    for char in expression:
        if char in ['T', 'F']:
            if not parsing:
                result = eval(''.join(map(str, stack)))
                stack = []
                parsing = bool(result)
            stack.append(char)
        elif char in ['|', '&']:
            stack.append(char)
            parsing = (char == '&')
    return eval(''.join(map(str, stack)))