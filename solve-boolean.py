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
            if char == '&':
                if stack[-1] == 'F':
                    stack.pop()
                else:
                    stack.append(' & ')
            elif char == '|':
                stack.append(f' | {char}')
    return eval(''.join(map(str, [stack[0][:-2]])))